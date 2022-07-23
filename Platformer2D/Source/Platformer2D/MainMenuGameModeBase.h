// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AMainMenuGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMainMenuGameModeBase();


protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AMainMenuGameModeBase>
	virtual void BeginPlay();
	// </AMainMenuGameModeBase>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Widgets>
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> MainMenuHUDWidget;

	class UMainMenuWidget* mainMenuWidget;
	// </Widgets>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

};