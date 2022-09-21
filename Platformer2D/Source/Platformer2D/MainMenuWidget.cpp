// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "ControlsWidget.h"

#include "MainMenuGameModeBase.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"



///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ButtonFunctions>
void UMainMenuWidget::OnNewGameClicked()
{
	//create a new game save
	AMainMenuGameModeBase* gameMode = (AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->CreateNewGame();
	}

	FadeImage->SetVisibility(ESlateVisibility::Visible);
	//fade the widget into black
	PlayFadeOutAnimation();

	//start the first level
	GetWorld()->GetTimerManager().SetTimer(FadeOutTimer, this, &UMainMenuWidget::OnNewLevel, FadeOutAnimation->GetEndTime(), true);
	
}

void UMainMenuWidget::OnQuitClicked()
{
	//exit the application
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}

void UMainMenuWidget::OnControlsClicked()
{
	controlsWidgetHUD->SetVisibility(ESlateVisibility::Visible);
	BackButton->SetVisibility(ESlateVisibility::Visible);
	NewGameButton->SetVisibility(ESlateVisibility::Hidden);
	ControlsButton->SetVisibility(ESlateVisibility::Hidden);
	LoadGameButton->SetVisibility(ESlateVisibility::Hidden);
	QuitButton->SetVisibility(ESlateVisibility::Hidden);
	TitleBlock->SetVisibility(ESlateVisibility::Hidden);
	TitleBlock2->SetVisibility(ESlateVisibility::Hidden);
}

void UMainMenuWidget::OnLoadGameClicked()
{
	FadeImage->SetVisibility(ESlateVisibility::Visible);
	//fade the widget into black
	PlayFadeOutAnimation();

	//start the first level
	GetWorld()->GetTimerManager().SetTimer(FadeOutTimer, this, &UMainMenuWidget::LoadGame, FadeOutAnimation->GetEndTime(), true);
}

void UMainMenuWidget::LoadGame()
{
	// get the game mode
	AMainMenuGameModeBase* gameMode = (AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->LoadGame();
	}
}

void UMainMenuWidget::OnBackClicked()
{
	OnStart();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UMainMenuWidget>
void UMainMenuWidget::OnStart()
{
	FadeImage->SetVisibility(ESlateVisibility::Hidden);
	controlsWidgetHUD->SetVisibility(ESlateVisibility::Hidden);
	BackButton->SetVisibility(ESlateVisibility::Hidden);
	NewGameButton->SetVisibility(ESlateVisibility::Visible);
	ControlsButton->SetVisibility(ESlateVisibility::Visible);
	LoadGameButton->SetVisibility(ESlateVisibility::Visible);
	QuitButton->SetVisibility(ESlateVisibility::Visible);
	TitleBlock->SetVisibility(ESlateVisibility::Visible);
	TitleBlock2->SetVisibility(ESlateVisibility::Visible);
}

void UMainMenuWidget::NativeConstruct()
{
	//if the new game button has been clicked
	if (NewGameButton)
	{
		NewGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnNewGameClicked);
	}

	//if the quit game button has been clicked
	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClicked);
	}

	//if the options button has been clicked
	if (ControlsButton)
	{
		ControlsButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnControlsClicked);
	}

	//if the how to play button has been clicked
	if (LoadGameButton)
	{
		LoadGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnLoadGameClicked);
	}

	//display the main menu hud
	if (BackButton)
	{
		BackButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnBackClicked);
	}
}


void UMainMenuWidget::OnNewLevel()
{
	//open the 1st level
	UGameplayStatics::OpenLevel(GetWorld(), "Level1");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Animation>
void UMainMenuWidget::PlayFadeOutAnimation()
{
	//play the title animation
	PlayAnimation(FadeOutAnimation, 0.f, 1.f, EUMGSequencePlayMode::Forward, 1.f, false);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////