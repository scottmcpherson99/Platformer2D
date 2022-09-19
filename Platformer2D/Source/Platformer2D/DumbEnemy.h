// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "DumbEnemy.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ADumbEnemy : public AEnemyBase
{
	GENERATED_BODY()
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float movementSpeed;
};
