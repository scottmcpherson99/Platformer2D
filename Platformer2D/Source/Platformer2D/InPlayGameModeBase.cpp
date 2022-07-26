// Fill out your copyright notice in the Description page of Project Settings.


#include "InPlayGameModeBase.h"

#include "PlayerCharacter.h"

#include "AudioManager.h"

#include "Kismet/GameplayStatics.h"

#include "Blueprint/UserWidget.h"
#include "GameHUD.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AInPlayGameModeBase::AInPlayGameModeBase()
{

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay
void AInPlayGameModeBase::OnPlayerDeath()
{
	gameWidget->OnPlayerDeath();
}
FName AInPlayGameModeBase::GetNextLevelName()
{
	for (int i = 0; i < sizeof(levelNames); i++)
	{
		if (levelNames[i] == FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)))
		{
			return levelNames[i + 1];
		}
	}
	return FName("MainMenu");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// In Play Game Mode Interface
void AInPlayGameModeBase::BeginPlay()
{
	//check the main menu widget has been set, if it has, add it to the viewport
	if (IsValid(GameHUDWidget))
	{
		gameWidget = Cast<UGameHUD>(CreateWidget(GetWorld(), GameHUDWidget));
		gameWidget->AddToViewport();
		gameWidget->UpdatePlayerCoins(0);
		gameWidget->UpdatePlayerLives(0);
		gameWidget->OnStart();
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
// Widgets
void AInPlayGameModeBase::UpdatePlayerStats(float coins_, float lives_, float bulletsRemaining_)
{
	gameWidget->UpdatePlayerCoins(coins_);
	gameWidget->UpdatePlayerLives(lives_);
	gameWidget->UpdatePlayerBullets(bulletsRemaining_);
}

void AInPlayGameModeBase::PlayFadeOut()
{
	gameWidget->OnComplete();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////