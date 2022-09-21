
// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameModeBase.h"

#include "PlayerCharacter.h"

#include "AudioManager.h"

#include "SaveGameStats.h"

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

	//create the audio manager handler that will play the audio in the main menu and play the background music
	if (IsValid(audioManager))
	{
		audioManagerHandler = Cast<AAudioManager>(UGameplayStatics::GetActorOfClass(GetWorld(), audioManager));

		if (audioManagerHandler != nullptr)
		{
			audioManagerHandler->PlayLoopingAudio(backgroundMusic);
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Save Game
void AMainMenuGameModeBase::CreateNewGame()
{
	//create a new save game slot
	savePlayerStats = Cast<USaveGameStats>(UGameplayStatics::CreateSaveGameObject(USaveGameStats::StaticClass()));
	
	//set the default values
	if (savePlayerStats != nullptr)
	{
		savePlayerStats->SetLives(3);
		savePlayerStats->SetCoins(0);
		savePlayerStats->SetBullets(0);
		savePlayerStats->SetLevelName(FName("Level1"));
	}

	UGameplayStatics::SaveGameToSlot(savePlayerStats, FString("Slot1"), 0);
}

void AMainMenuGameModeBase::LoadGame()
{
	//check if the save game slot exists, if it load the last played level
	if (UGameplayStatics::DoesSaveGameExist(FString("Slot1"), 0))
	{
		//load the save game slot
		USaveGameStats* loadGameObj_ = Cast<USaveGameStats>(UGameplayStatics::LoadGameFromSlot(FString("Slot1"), 0));

		//open the level the player was last on
		UGameplayStatics::OpenLevel(GetWorld(), loadGameObj_->GetPlayerLevel());
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////