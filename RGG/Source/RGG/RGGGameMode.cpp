// Copyright Epic Games, Inc. All Rights Reserved.

#include "RGGGameMode.h"
#include "RGGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARGGGameMode::ARGGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
