// Copyright Epic Games, Inc. All Rights Reserved.

#include "FracturePrototypeGameMode.h"
#include "FracturePrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFracturePrototypeGameMode::AFracturePrototypeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
