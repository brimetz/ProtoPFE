// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProtoRTSPFEPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "ProtoRTSPFECharacter.h"
#include "Engine/World.h"
#include "Engine.h"

AProtoRTSPFEPlayerController::AProtoRTSPFEPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AProtoRTSPFEPlayerController::BeginPlay()
{
	GetViewportSize(ScreenWitdh, ScreenHeight);
}

void AProtoRTSPFEPlayerController::CheckMousePosition()
{
	float MousePositionX;
	float MousePositionY;
	GetViewportSize(ScreenWitdh, ScreenHeight);

	GetMousePosition(MousePositionX, MousePositionY);
	GetViewportSize(ScreenWitdh, ScreenHeight);

	if (MousePositionX < ScreenMovementMargin)
	{
		MousePositionX = 0;
		MoveUpDownCamera(-1.f);
	}
	else if (MousePositionX > ScreenWitdh - ScreenMovementMargin)
	{
		MousePositionX = ScreenWitdh;
		MoveUpDownCamera(1.f);
	}

	if (MousePositionY < ScreenMovementMargin)
	{
		MousePositionY = 0;
		MoveRightLeftCamera(1.f);
	}
	else if (MousePositionY > ScreenHeight - ScreenMovementMargin)
	{
		MousePositionY = ScreenHeight;
		MoveRightLeftCamera(-1.f);
	}
}

void AProtoRTSPFEPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CheckMousePosition();

	UpdateMovementCamera(DeltaTime);

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}
}

void AProtoRTSPFEPlayerController::UpdateMovementCamera(float DeltaTime)
{
	FVector NewLocation = GetCharacter()->GetActorLocation();
	NewLocation += InputMoveVector * CameraSpeed;
	GetCharacter()->SetActorLocation(NewLocation);

	InputMoveVector = FVector(0,0,0);
}

void AProtoRTSPFEPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &AProtoRTSPFEPlayerController::MoveRightLeftCamera);
	InputComponent->BindAxis("MoveRight", this, &AProtoRTSPFEPlayerController::MoveUpDownCamera);
	InputComponent->BindAxis("Zoom", this, &AProtoRTSPFEPlayerController::ZoomInOutCamera);

	InputComponent->BindAction("ResetVR", IE_Pressed, this, &AProtoRTSPFEPlayerController::OnResetVR);
}

void AProtoRTSPFEPlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AProtoRTSPFEPlayerController::MoveToMouseCursor()
{
	if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
	{
		if (AProtoRTSPFECharacter* MyPawn = Cast<AProtoRTSPFECharacter>(GetPawn()))
		{
			if (MyPawn->GetCursorToWorld())
			{
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
			}
		}
	}
	else
	{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);
	}
}

void AProtoRTSPFEPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void AProtoRTSPFEPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}

void AProtoRTSPFEPlayerController::MoveRightLeftCamera(float ratio)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "debug msg");

	InputMoveVector += FVector(ratio, 0, 0);
}
 
void AProtoRTSPFEPlayerController::MoveUpDownCamera(float ratio)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "debug msg");

	InputMoveVector += FVector(0, ratio, 0);
}

void AProtoRTSPFEPlayerController::ZoomInOutCamera(float ratio)
{
	AProtoRTSPFECharacter* character = Cast<AProtoRTSPFECharacter>(GetCharacter());

	if (ratio < 0)
	{
		character->GetCameraBoom()->TargetArmLength *= 0.90;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "debug msg");
	}
	else if (ratio > 0)
	{
		character->GetCameraBoom()->TargetArmLength *= 1.10;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, "debug msg");
	}

	if (character->GetCameraBoom()->TargetArmLength < 300)
		character->GetCameraBoom()->TargetArmLength = 300;
	else if (character->GetCameraBoom()->TargetArmLength > 1100)
		character->GetCameraBoom()->TargetArmLength = 1100;
}
