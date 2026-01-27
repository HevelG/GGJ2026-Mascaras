// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ2026MaskGameMode.h"
#include "GGJ2026MaskPlayerController.h"
#include "GGJ2026MaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGJ2026MaskGameMode::AGGJ2026MaskGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGGJ2026MaskPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}