// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"

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