// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"

#include "MainMenuGameModeBase.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"



///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ButtonFunctions>
void UMainMenuWidget::OnNewGameClicked()
{
	//open the 1st level
	UGameplayStatics::OpenLevel(GetWorld(), "Level1");
}

void UMainMenuWidget::OnQuitClicked()
{
	//exit the application
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
	}

void UMainMenuWidget::OnOptionsClicked()
{

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UMainMenuWidget>
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
	if (OptionsButton)
	{
		OptionsButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnOptionsClicked);
	}
}

void UMainMenuWidget::OnStart()
{
	//play the main title animation
	GetWorld()->GetTimerManager().SetTimer(mainMenuTitleTimer, this, &UMainMenuWidget::PlayTitleAnimation, TitleAnimation->GetEndTime(), true);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Animation>
void UMainMenuWidget::PlayTitleAnimation()
{
	//play the title animation
	PlayAnimation(TitleAnimation, 0.f, 1.f, EUMGSequencePlayMode::Forward, 1.f, false);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////