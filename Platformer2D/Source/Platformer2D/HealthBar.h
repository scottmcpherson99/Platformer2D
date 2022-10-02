// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Boss.h"
#include "HealthBar.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UHealthBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
		void SetOwnerBoss(ABoss* InBoss)
	{
		ownerBoss = InBoss;
	}
protected:
	void NativeTick(const FGeometry& myGeometry, float InDeltaTime) override;

	TWeakObjectPtr<ABoss> ownerBoss;

	UPROPERTY(meta = (BindWidget))
		class UProgressBar* healthBar;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* currentHealthLabel;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* maxHealthLabel;
};
