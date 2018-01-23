// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BattleGroundsGameMode.h"
#include "BattleGroundsHUD.h"
#include "BattleGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABattleGroundsGameMode::ABattleGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABattleGroundsHUD::StaticClass();
}
