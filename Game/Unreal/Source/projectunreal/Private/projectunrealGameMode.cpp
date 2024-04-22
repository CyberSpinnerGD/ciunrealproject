// Copyright Epic Games, Inc. All Rights Reserved.

#include "projectunrealGameMode.h"
#include "projectunrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AprojectunrealGameMode::AprojectunrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
