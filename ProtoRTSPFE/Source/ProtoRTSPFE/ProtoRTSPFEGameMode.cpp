// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProtoRTSPFEGameMode.h"
#include "ProtoRTSPFEPlayerController.h"
#include "ProtoRTSPFECharacter.h"
#include "UObject/ConstructorHelpers.h"

AProtoRTSPFEGameMode::AProtoRTSPFEGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProtoRTSPFEPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}