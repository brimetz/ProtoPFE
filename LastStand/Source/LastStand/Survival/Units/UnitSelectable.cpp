// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitSelectable.h"

#include "Components/DecalComponent.h"

#include "../Player/SurvivalPlayerController.h"

#include "Squad.h"

// Sets default values
AUnitSelectable::AUnitSelectable()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	m_cursorToWorld->SetVisibility(false);
}

// Called when the game starts or when spawned
void AUnitSelectable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnitSelectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUnitSelectable::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AUnitSelectable::OnDoubleClicked()
{
	// Acces C++ Sur le Character afin de deplacer le controller du joueur qui a click� sur cette IA 

	/*ASurvivalPlayerController* _playerController = GetController<ASurvivalPlayerController>();
	if (_playerController)
	{
		_playerController->GetPawn()->SetActorLocation(GetActorLocation());
	}*/
}


void AUnitSelectable::setSelected()
{
	m_cursorToWorld->SetVisibility(true);
}

void AUnitSelectable::setDeselected()
{
	m_cursorToWorld->SetVisibility(false);
}

