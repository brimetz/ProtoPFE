// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ProtoRTSPFECharacter.h"
#include "ProtoRTSPFEPlayerController.generated.h"

UCLASS()
class AProtoRTSPFEPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AProtoRTSPFEPlayerController();

	void MoveRightLeftCamera(float ratio);
	void MoveUpDownCamera(float ratio);

	void ZoomInOutCamera(float ratio);
	void CheckRangeOfZoom(AProtoRTSPFECharacter* character);

	int ZoomMaxRange = 1100;
	int ZoomMinRange = 300;

	float CameraSpeed = 5.f;

	FVector InputMoveVector = FVector(0,0,0);

	float ScreenMovementMargin = 15.f;
	int ScreenWitdh = 0;
	int ScreenHeight = 0;

	void UpdateMovementCamera(float DeltaTime);

	void CheckMousePosition();
	void CheckBorderRightLeft(float MousePosY);
	void CheckBorderUpDown(float MousePosX);

	virtual void BeginPlay() override;

protected:
	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	/** Resets HMD orientation in VR. */
	void OnResetVR();
};