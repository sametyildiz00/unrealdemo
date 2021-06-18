// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealDemo1GameMode.h"
#include "UnrealDemo1Character.h"
#include "UObject/ConstructorHelpers.h"

AUnrealDemo1GameMode::AUnrealDemo1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
