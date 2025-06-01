// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "EscapeMultiGameMode.h"
#include "EscapeMultiPlayerController.h"
#include "EscapeMultiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscapeMultiGameMode::AEscapeMultiGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEscapeMultiPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/???"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}