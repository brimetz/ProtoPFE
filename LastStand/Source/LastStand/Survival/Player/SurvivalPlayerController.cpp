// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalPlayerController.h"

#include "Math/UnrealMathUtility.h"
#include "Components/DecalComponent.h"
#include "Camera/CameraComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "SurvivalPlayerPawn.h"
#include "../SurvivalHUD.h"
#include "../Units/UnitSelectable.h"

ASurvivalPlayerController::ASurvivalPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ASurvivalPlayerController::BeginPlay()
{
	// Take Size of the Screen
	GetViewportSize(m_iScreenWidth, m_iScreenHeight);

	// Init HUD Pointeur
	m_survivalHUD = Cast<ASurvivalHUD>(GetHUD());
}

void ASurvivalPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	computeMouseLocation();

	updateCamera(DeltaTime);
}

#pragma region Input

void ASurvivalPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Camera Mouvement 
	InputComponent->BindAxis("Forward", this, &ASurvivalPlayerController::cameraVerticalMovement);
	InputComponent->BindAxis("Right", this, &ASurvivalPlayerController::cameraHorizontalMovement);
	InputComponent->BindAxis("Zoom", this, &ASurvivalPlayerController::zoomCamera);

	InputComponent->BindAction("WheelClick", EInputEvent::IE_Pressed, this, &ASurvivalPlayerController::OnWheelClicked);
	InputComponent->BindAction("WheelClick", EInputEvent::IE_Released, this, &ASurvivalPlayerController::OnWheelReleased);
	//

	// Controls
	InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &ASurvivalPlayerController::selectionPressed);
	InputComponent->BindAction("LeftMouseClick", IE_Released, this, &ASurvivalPlayerController::selectionReleased);

	InputComponent->BindAction("CtrlLeftMouseClick", IE_Pressed, this, &ASurvivalPlayerController::ctrlClickSelection);
	InputComponent->BindAction("CtrlLeftMouseClick", IE_Released, this, &ASurvivalPlayerController::releaseCtrlClick);
	
	InputComponent->BindAction("RightMouseClick", IE_Released, this, &ASurvivalPlayerController::interaction);
	//

}

void ASurvivalPlayerController::cameraVerticalMovement(float _fRatio)
{
	m_vInputVector += FVector(_fRatio, 0, 0);
}

void ASurvivalPlayerController::cameraHorizontalMovement(float _fRatio)
{
	m_vInputVector += FVector(0, _fRatio, 0);
}

void ASurvivalPlayerController::zoomCamera(float _fRatio)
{
	if (0 == _fRatio)
		return;

	ASurvivalPlayerPawn* _aPawn = Cast<ASurvivalPlayerPawn>(GetPawn());

	if (!_aPawn)
		return;

	USpringArmComponent* _cameraBoom = _aPawn->getCameraBoom();
	if (!_cameraBoom)
		return;

	if (0 > _fRatio)
	{
		_cameraBoom->TargetArmLength *= 1 - m_fZoomCoefficient;
	}
	else
	{
		_cameraBoom->TargetArmLength *= 1 + m_fZoomCoefficient;
	}

	checkZoomRange(_cameraBoom);
}

void ASurvivalPlayerController::OnWheelClicked()
{
	m_bMouseWheelClick = true;

	GetMousePosition(m_fWheelClickWidthLocation, m_fWheelClickHeightLocation);
}

void ASurvivalPlayerController::OnWheelReleased()
{
	m_bMouseWheelClick = false;

	m_fWheelClickWidthLocation = m_fWheelClickHeightLocation = 0.0f;
}

void ASurvivalPlayerController::selectionPressed()
{
	m_survivalHUD->m_vInitialSelectionPoint = m_survivalHUD->getMousePos2D();
	m_survivalHUD->m_bSelecting = true;
}

void ASurvivalPlayerController::selectionReleased()
{
	m_survivalHUD->m_bSelecting = false;
	UpdateSelection();
}

void ASurvivalPlayerController::ctrlClickSelection()
{
	m_survivalHUD->m_vInitialSelectionPoint = m_survivalHUD->getMousePos2D();
	m_survivalHUD->m_bCtrlClickSelectionUpdate = true;
}

void ASurvivalPlayerController::releaseCtrlClick()
{
	UpdateSelection();
}

void ASurvivalPlayerController::interaction()
{
	if (m_liSelectedActors.Num() > 0)
	{
		for (int32 i = 0; i < m_liSelectedActors.Num(); i++)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, "Interaction with one Unit");
		}
	}
}

#pragma endregion

#pragma region Zoom

void ASurvivalPlayerController::checkZoomRange(USpringArmComponent* _cameraBoom)
{
	if (!_cameraBoom)
		return;

	if (_cameraBoom->TargetArmLength < m_iZoomMinRange)
		_cameraBoom->TargetArmLength = m_iZoomMinRange;
	else if (_cameraBoom->TargetArmLength > m_iZoomMaxRange)
		_cameraBoom->TargetArmLength = m_iZoomMaxRange;
}

#pragma endregion

#pragma region Camera

void ASurvivalPlayerController::updateCamera(float _fDeltaTime)
{
	APawn* _aPawn = GetPawn();
	if (_aPawn)
	{
		FVector _vNewLocation = _aPawn->GetActorLocation();
		_vNewLocation += m_vInputVector * m_fCameraSpeed;

		_aPawn->SetActorLocation(_vNewLocation);
	}

	m_vInputVector = FVector::ZeroVector;
}

#pragma endregion

#pragma region Screen

void ASurvivalPlayerController::checkScreenMargin(float _fMouseXLocation, float _fMouseYLocation)
{
	if (_fMouseXLocation < m_fScreenMargin)
		cameraHorizontalMovement(-1.f);
	else if (_fMouseXLocation > m_iScreenWidth - m_fScreenMargin)
		cameraHorizontalMovement(1.f);

	if (_fMouseYLocation < m_fScreenMargin)
		cameraVerticalMovement(1.f);
	else if (_fMouseYLocation > m_iScreenHeight - m_fScreenMargin)
		cameraVerticalMovement(-1.f);
}

void ASurvivalPlayerController::computeMouseLocation()
{
	float _fMouseXLocation;
	float _fMouseYLocation;

	GetMousePosition(_fMouseXLocation, _fMouseYLocation);

	if (m_bMouseWheelClick)
	{
		computeWheelClickMove(_fMouseXLocation, _fMouseYLocation);
	}
	else
	{
		checkScreenMargin(_fMouseXLocation, _fMouseYLocation);
	}
}

void ASurvivalPlayerController::computeWheelClickMove(float _fMouseXLocation, float _fMouseYLocation)
{
	FVector _vMove = FVector::ZeroVector;

	if (m_iEpsilonWheelClickMovement < UKismetMathLibrary::Abs(m_fWheelClickHeightLocation - _fMouseYLocation))
		_vMove.X += FMath::Clamp((m_fWheelClickHeightLocation - _fMouseYLocation), -1.0f, 1.0f);
	
	if (m_iEpsilonWheelClickMovement < UKismetMathLibrary::Abs(_fMouseXLocation - m_fWheelClickWidthLocation))
		_vMove.Y += FMath::Clamp((_fMouseXLocation - m_fWheelClickWidthLocation), -1.0f, 1.0f);

	m_vInputVector += _vMove;
}

#pragma endregion

void ASurvivalPlayerController::UpdateSelection()
{
	m_liSelectedActors = m_survivalHUD->m_liCurrentActorSelection;
}