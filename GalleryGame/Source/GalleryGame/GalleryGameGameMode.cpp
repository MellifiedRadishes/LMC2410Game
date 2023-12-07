// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalleryGameGameMode.h"
#include "GalleryGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGalleryGameGameMode::AGalleryGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
