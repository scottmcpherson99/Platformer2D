
// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameModeBase.h"

#include "PlayerCharacter.h"

#include "Kismet/GameplayStatics.h"

#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AMainMenuGameModeBase::AMainMenuGameModeBase()
{

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Main Menu Game Mode Interface
void AMainMenuGameModeBase::BeginPlay()
{
	//turn off the input for the player character and show the mouse cursor to let the user navigate the menu
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (playerController != nullptr)
	{
		playerController->bShowMouseCursor = true;

		if (playerCharacter != nullptr)
		{
			playerCharacter->DisableInput(playerController);
		}
	}

	//check the main menu widget has been set, if it has, add it to the viewport
	if (IsValid(MainMenuHUDWidget))
	{
		mainMenuWidget = Cast<UMainMenuWidget>(CreateWidget(GetWorld(), MainMenuHUDWidget));
		mainMenuWidget->AddToViewport();
		mainMenuWidget->OnStart();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////