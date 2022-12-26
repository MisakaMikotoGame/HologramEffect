// Copyright Epic Games, Inc. All Rights Reserved.

#include "HologramEffectGameMode.h"
#include "HologramEffectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHologramEffectGameMode::AHologramEffectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
