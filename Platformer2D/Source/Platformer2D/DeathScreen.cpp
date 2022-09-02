// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathScreen.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ButtonFunctions>
void UDeathScreen::OnRetryClicked()
{
	//re open the current level
	UGameplayStatics::OpenLevel(GetWorld(), FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)));
}

void UDeathScreen::OnMainMenuClickedClicked()
{
	//open the main menu
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainMenu"));
}

void UDeathScreen::OnQuitClicked()
{
	//exit the application
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UMainMenuWidget>
void UDeathScreen::NativeConstruct()
{
	//if the retry button has been clicked
	if (RetryButton)
	{
		RetryButton->OnClicked.AddDynamic(this, &UDeathScreen::OnRetryClicked);
	}

	//if the quit game button has been clicked
	if (MainMenuButton)
	{
		MainMenuButton->OnClicked.AddDynamic(this, &UDeathScreen::OnMainMenuClickedClicked);
	}

	//if the options button has been clicked
	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UDeathScreen::OnQuitClicked);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////