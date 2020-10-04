// Copyright Epic Games, Inc. All Rights Reserved.

#include "LastStandGameMode.h"
#include "LastStandPlayerController.h"
#include "LastStandCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALastStandGameMode::ALastStandGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALastStandPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}