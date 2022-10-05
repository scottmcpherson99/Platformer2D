// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthBar.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UHealthBar::NativeTick(const FGeometry& myGeometry, float InDeltaTime)
{
	Super::NativeTick(myGeometry, InDeltaTime);

	if (!ownerBoss.IsValid())
	{
		return;
	}

	healthBar->SetPercent(ownerBoss->GetHealth() / ownerBoss->GetMaxHealth());

	//currentHealthLabel->SetText(FText::AsNumber(ownerBoss->GetHealth()));
	//maxHealthLabel->SetText(FText::AsNumber(ownerBoss->GetMaxHealth()));

}
