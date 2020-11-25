// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SurvivalHUD.generated.h"

class AUnitSelectable;

/**
 * 
 */
UCLASS()
class LASTSTAND_API ASurvivalHUD : public AHUD
{
	GENERATED_BODY()
private:
	bool FindUnitInArray(TArray<AUnitSelectable*> _array, AUnitSelectable* _unitToSearch);


public:
	virtual void DrawHUD() override; // Same as Tick()

	void addRemoveActorFromArray();

	FVector2D m_vInitialSelectionPoint;
	FVector2D m_vCurrentSelectionPoint;

	FVector2D getMousePos2D();

	TArray<AUnitSelectable*> m_liCurrentActorSelection;

	bool m_bSelecting = false;
	bool m_bCtrlClickSelectionUpdate = false;


	UFUNCTION(BlueprintCallable)
	void AddUnit(AUnitSelectable* _unit);
};
