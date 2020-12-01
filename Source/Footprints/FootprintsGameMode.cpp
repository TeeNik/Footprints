// Copyright Epic Games, Inc. All Rights Reserved.

#include "FootprintsGameMode.h"
#include "FootprintsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFootprintsGameMode::AFootprintsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
