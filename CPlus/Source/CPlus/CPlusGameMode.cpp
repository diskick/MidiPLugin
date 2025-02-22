// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPlusGameMode.h"
#include "CPlusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPlusGameMode::ACPlusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(
		TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}
