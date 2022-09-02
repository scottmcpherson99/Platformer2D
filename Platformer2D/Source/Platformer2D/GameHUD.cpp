// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"
#include "DeathScreen.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UpdatePlayerStats>
//update the text displaying the players coins
void UGameHUD::UpdatePlayerCoins(float coins_)
{
	PlayerCoins->SetText(FText::AsNumber(coins_));
}

//update the text displaying the players lives
void UGameHUD::UpdatePlayerLives(float lives_)
{
	PlayerLives->SetText(FText::AsNumber(lives_));
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UMainMenuWidget>
void UGameHUD::OnStart()
{
	//play the fade in animation
	PlayAnimation(FadeInAnimation, 0.f, 1.f, EUMGSequencePlayMode::Forward, 1.f, false);
	deathScreenHUD->SetVisibility(ESlateVisibility::Hidden);
	PlayerLives->SetVisibility(ESlateVisibility::Visible);
	PlayerCoins->SetVisibility(ESlateVisibility::Visible);
}

void UGameHUD::OnComplete()
{
	//play the fade out animation
	PlayAnimation(FadeOutAnimation, 0.f, 1.f, EUMGSequencePlayMode::Forward, 1.f, false);
	PlayerLives->SetVisibility(ESlateVisibility::Visible);
	PlayerCoins->SetVisibility(ESlateVisibility::Visible);

}

void UGameHUD::OnPlayerDeath()
{
	//play the death screen animation
	PlayAnimation(DeathAnimation, 0.f, 1.f, EUMGSequencePlayMode::Forward, 1.f, false);
	deathScreenHUD->SetVisibility(ESlateVisibility::Visible);
	PlayerLives->SetVisibility(ESlateVisibility::Hidden);
	PlayerCoins->SetVisibility(ESlateVisibility::Hidden);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////