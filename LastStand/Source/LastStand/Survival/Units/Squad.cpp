// Fill out your copyright notice in the Description page of Project Settings.


#include "Squad.h"

#include "UnitSelectable.h"

// Sets default values
ASquad::ASquad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASquad::BeginPlay()
{
	Super::BeginPlay();
	
	for (int32 i = 0; i < m_liUnits.Num(); i++)
	{
		m_liUnits[i]->m_pSquadParent = this;
	}
}

// Called every frame
void ASquad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASquad::setSelected()
{
	for (int32 i = 0; i < m_liUnits.Num(); i++)
	{
		m_liUnits[i]->setSelected();
	}
}

void ASquad::setDeselected()
{
	for (int32 i = 0; i < m_liUnits.Num(); i++)
	{
		m_liUnits[i]->setDeselected();
	}
}

