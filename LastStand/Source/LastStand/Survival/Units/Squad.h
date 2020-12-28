// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Squad.generated.h"

class AUnitSelectable;

UCLASS()
class LASTSTAND_API ASquad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASquad();

	UPROPERTY(EditAnywhere)
	TArray<AUnitSelectable*> m_liUnits;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void setSelected();
	UFUNCTION(BlueprintCallable)
	void setDeselected();
};
