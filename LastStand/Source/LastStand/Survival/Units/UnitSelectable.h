// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UnitSelectable.generated.h"

UCLASS()
class LASTSTAND_API AUnitSelectable : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUnitSelectable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UDecalComponent* m_cursorToWorld;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void OnDoubleClicked();

	UFUNCTION(BlueprintCallable)
	void setSelected();
	UFUNCTION(BlueprintCallable)
	void setDeselected();
};
