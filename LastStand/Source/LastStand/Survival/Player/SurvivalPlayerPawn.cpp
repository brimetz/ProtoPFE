// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalPlayerPawn.h"

#include "Components/DecalComponent.h"
#include "Camera/CameraComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ASurvivalPlayerPawn::ASurvivalPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom...
	m_cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	m_cameraBoom->SetupAttachment(RootComponent);
	m_cameraBoom->SetAbsolute(false, true, false);
	m_cameraBoom->TargetArmLength = 800.f;
	m_cameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	m_cameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...// Create a camera...
	m_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_camera->SetupAttachment(m_cameraBoom, USpringArmComponent::SocketName);
	m_camera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Create a decal in the world to show the cursor's location
	m_cursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	m_cursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/LastStand/Arts/Survival/UI/Cursor/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
	{
		m_cursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	}
	m_cursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	m_cursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());
}

// Called every frame
void ASurvivalPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_cursorToWorld)
	{
		APlayerController* _aPlayerController = Cast<APlayerController>(GetController());
		if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
		{
			UWorld* _wWorld = GetWorld();

			if (_wWorld)
			{
				FHitResult _hitResult;
				FCollisionQueryParams Params(NAME_None, FCollisionQueryParams::GetUnknownStatId());
				FVector m_vStartLocation = m_camera->GetComponentLocation();
				FVector m_vEndLocation = m_camera->GetComponentRotation().Vector() * 2000.0f;
				Params.AddIgnoredActor(this);
				_wWorld->LineTraceSingleByChannel(_hitResult, m_vStartLocation, m_vEndLocation, ECC_Visibility, Params);
				FQuat SurfaceRotation = _hitResult.ImpactNormal.ToOrientationRotator().Quaternion();
				m_cursorToWorld->SetWorldLocationAndRotation(_hitResult.Location, SurfaceRotation);
			}
		}
		else if (_aPlayerController)
		{
			FHitResult _traceHitResult;
			_aPlayerController->GetHitResultUnderCursor(ECC_Visibility, true, _traceHitResult);
			FVector _vCursor = _traceHitResult.ImpactNormal;
			FRotator _rCursor = _vCursor.Rotation();
			m_cursorToWorld->SetWorldLocation(_traceHitResult.Location);
			m_cursorToWorld->SetWorldRotation(_rCursor);
		}
	}
}

#pragma region Getters/Setters

UCameraComponent* ASurvivalPlayerPawn::getCamera() const
{
	return m_camera;
}

USpringArmComponent* ASurvivalPlayerPawn::getCameraBoom() const
{
	return m_cameraBoom;
}

UDecalComponent* ASurvivalPlayerPawn::getCursorToWorld() const
{
	return m_cursorToWorld;
}

#pragma endregion
