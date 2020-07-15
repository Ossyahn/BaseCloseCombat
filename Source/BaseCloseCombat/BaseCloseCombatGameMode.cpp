// Copyright Epic Games, Inc. All Rights Reserved.

#include "BaseCloseCombatGameMode.h"
#include "BaseCloseCombatCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABaseCloseCombatGameMode::ABaseCloseCombatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
