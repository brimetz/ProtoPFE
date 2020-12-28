// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SurvivalPlayerController.generated.h"

class ASurvivalPlayerPawn;
class ASurvivalHUD;
class USpringArmComponent;

class AUnitSelectable;
class ASquad;

/**
 * 
 */
UCLASS()
class LASTSTAND_API ASurvivalPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	ASurvivalPlayerController();

#pragma region Input

	FVector m_vInputVector = FVector::ZeroVector;

	void OnWheelClicked();
	void OnWheelReleased();

	void cameraVerticalMovement(float _fRatio);
	void cameraHorizontalMovement(float _fRatio);

	void zoomCamera(float _fRatio);

	void selectionPressed();
	void selectionReleased();

	void ctrlClickSelection();
	void releaseCtrlClick();

	void interaction();

#pragma endregion

#pragma region Zoom

	bool m_bMouseWheelClick = false;

	float m_fWheelClickWidthLocation = 0.0f;
	float m_fWheelClickHeightLocation = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Zoom, meta = (AllowPrivateAccess = "true"))
	int m_iZoomMaxRange = 1100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Zoom, meta = (AllowPrivateAccess = "true"))
	int m_iZoomMinRange = 300;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Zoom, meta = (AllowPrivateAccess = "true"))
	float m_fZoomCoefficient = 0.10f;

	void checkZoomRange(USpringArmComponent* _cameraBoom);

#pragma endregion

#pragma region Camera

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (AllowPrivateAccess = "true"))
	float m_fCameraSpeed = 5.0f;
	void updateCamera(float _fDeltaTime);

#pragma endregion

#pragma region Screen

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Screen, meta = (AllowPrivateAccess = "true"))
	float m_fScreenMargin = 15.0f;

	int m_iScreenWidth = 0;
	int m_iScreenHeight = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Screen, meta = (AllowPrivateAccess = "true"))
	int m_iEpsilonWheelClickMovement = 10;

	void computeMouseLocation();
	void computeWheelClickMove(float _fMouseXLocation, float _fMouseYLocation);
	void checkScreenMargin(float _fMouseXLocation, float _fMouseYLocation);

#pragma endregion

#pragma region HUD

	ASurvivalHUD* m_survivalHUD = nullptr;

#pragma endregion

#pragma region Units

	TArray<ASquad*> m_liSelectedSquads;

#pragma endregion

	virtual void BeginPlay() override;

protected:

	// PlayerController Interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSelection();
};
