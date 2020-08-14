// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
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

	float CameraSpeed = 5.f;

	FVector InputMoveVector = FVector(0,0,0);

	float ScreenMovementMargin = 15.f;
	int ScreenWitdh = 0;
	int ScreenHeight = 0;

	void UpdateMovementCamera(float DeltaTime);

	void Test(float ratio);

	void CheckMousePosition();

	virtual void BeginPlay() override;

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Navigate player to the current mouse cursor location. */
	void MoveToMouseCursor();

	/** Input handlers for SetDestination action. */
	void OnSetDestinationPressed();
	void OnSetDestinationReleased();
};