// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/Button.h"

#include "DeathScreen.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UDeathScreen : public UUserWidget
{
	GENERATED_BODY()

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//button that will restart the level
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* RetryButton;

	//button that will load the main menu
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* MainMenuButton;

	//button that will exit the application
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* QuitButton;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ButtonFunctions>
	//restart the level
	UFUNCTION()
		void OnRetryClicked();

	//open the main menu
	UFUNCTION()
		void OnMainMenuClickedClicked();

	//exit the application
	UFUNCTION()
		void OnQuitClicked();
	// </ButtonFunctions>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UDeathScreen>
	virtual void NativeConstruct() override;
	// </UDeathScreen>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	
};