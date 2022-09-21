// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameStats.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <GettersandSetters>
// Update the value of the player's lives
const float USaveGameStats::GetLives() const
{
	return lives;
}

// Output the player's lives
void USaveGameStats::SetLives(float lives_)
{
	lives = lives_;
}

// Output the player's coins
const float USaveGameStats::GetCoins() const
{
	return coins;
}

// Update the value of the player's coins
void USaveGameStats::SetCoins(float coins_)
{
	coins = coins_;
}

// Output the player's bullets
const float USaveGameStats::GetBullets() const
{
	return bullets;
}

// Update the value of the player's lives
void USaveGameStats::SetBullets(float bullets_)
{
	bullets = bullets_;
}

// Output the level the player is on
const FName USaveGameStats::GetPlayerLevel() const
{
	return levelName;
}

// Update the value of the level the player reached
void USaveGameStats::SetLevelName(FName levelName_)
{
	levelName = levelName_;
}