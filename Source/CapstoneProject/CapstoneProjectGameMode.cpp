// Copyright Epic Games, Inc. All Rights Reserved.

#include "CapstoneProjectGameMode.h"
#include "CapstoneProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACapstoneProjectGameMode::ACapstoneProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
