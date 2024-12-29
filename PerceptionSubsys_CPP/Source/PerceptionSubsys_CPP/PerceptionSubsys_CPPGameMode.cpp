// Copyright Epic Games, Inc. All Rights Reserved.

#include "PerceptionSubsys_CPPGameMode.h"
#include "PerceptionSubsys_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APerceptionSubsys_CPPGameMode::APerceptionSubsys_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
