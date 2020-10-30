// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SurvivalPlayerPawn.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UDecalComponent;

UCLASS()
class LASTSTAND_API ASurvivalPlayerPawn : public APawn
{
	GENERATED_BODY()

private:
	USceneComponent* m_root = nullptr;

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* m_camera;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* m_cameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UDecalComponent* m_cursorToWorld;

public:	
	// Sets default values for this pawn's properties
	ASurvivalPlayerPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

#pragma region Getters/Setters

	UCameraComponent* getCamera() const;
	USpringArmComponent* getCameraBoom() const;
	UDecalComponent* getCursorToWorld() const;

#pragma endregion 
};
