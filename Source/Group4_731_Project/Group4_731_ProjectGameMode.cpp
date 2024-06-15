// Copyright Epic Games, Inc. All Rights Reserved.

#include "Group4_731_ProjectGameMode.h"
#include "Group4_731_ProjectPlayerController.h"
#include "Group4_731_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroup4_731_ProjectGameMode::AGroup4_731_ProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGroup4_731_ProjectPlayerController::StaticClass();

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