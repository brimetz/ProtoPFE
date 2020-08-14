// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProtoRTSPFEPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/World.h"
#include "Engine.h"

AProtoRTSPFEPlayerController::AProtoRTSPFEPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AProtoRTSPFEPlayerController::BeginPlay()
{
	// Take Size of the screen
	GetViewportSize(ScreenWitdh, ScreenHeight);
}

void AProtoRTSPFEPlayerController::CheckMousePosition()
{
	float MousePositionX;
	float MousePositionY;

	// Take Position Of the Mouse On The Viewport
	GetMousePosition(MousePositionX, MousePositionY);

	//Check Border to know if the camera need to move
	CheckBorderRightLeft(MousePositionY);
	CheckBorderUpDown(MousePositionX);
}

void AProtoRTSPFEPlayerController::CheckBorderRightLeft(float MousePosY)
{
	if (MousePosY < ScreenMovementMargin)
		MoveRightLeftCamera(1.f);
	else if (MousePosY > ScreenHeight - ScreenMovementMargin)
		MoveRightLeftCamera(-1.f);
}

void AProtoRTSPFEPlayerController::CheckBorderUpDown(float MousePosX)
{
	if (MousePosX < ScreenMovementMargin)
		MoveUpDownCamera(-1.f);
	else if (MousePosX > ScreenWitdh - ScreenMovementMargin)
		MoveUpDownCamera(1.f);
}

void AProtoRTSPFEPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CheckMousePosition();

	UpdateMovementCamera(DeltaTime);
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

void AProtoRTSPFEPlayerController::MoveRightLeftCamera(float ratio)
{
	InputMoveVector += FVector(ratio, 0, 0);
}
 
void AProtoRTSPFEPlayerController::MoveUpDownCamera(float ratio)
{
	InputMoveVector += FVector(0, ratio, 0);
}

void AProtoRTSPFEPlayerController::ZoomInOutCamera(float ratio)
{
	AProtoRTSPFECharacter* character = Cast<AProtoRTSPFECharacter>(GetCharacter());

	if (ratio < 0)
		character->GetCameraBoom()->TargetArmLength *= 0.90;
	else if (ratio > 0)
		character->GetCameraBoom()->TargetArmLength *= 1.10;

	CheckRangeOfZoom(character);
}

void AProtoRTSPFEPlayerController::CheckRangeOfZoom(AProtoRTSPFECharacter* character)
{
	if (character->GetCameraBoom()->TargetArmLength < ZoomMinRange)
		character->GetCameraBoom()->TargetArmLength = ZoomMinRange;
	else if (character->GetCameraBoom()->TargetArmLength > ZoomMaxRange)
		character->GetCameraBoom()->TargetArmLength = ZoomMaxRange;
}

