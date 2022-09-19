// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "InPlayGameModeBase.h"

#include "AudioManager.h"

#include "Components/InputComponent.h"

#include "GameFramework/CharacterMovementComponent.h"

#include "PaperSpriteComponent.h"
#include "PaperFlipbookComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Kismet/GameplayStatics.h"

#include "Bullet.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->SetUsingAbsoluteRotation(true);
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	playerFacingRight = true;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay
void APlayerCharacter::OnPlayerDeath()
{
	//Show the players mouse cursor and disable their movement
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerController != nullptr)
	{
		playerController->bShowMouseCursor = true;

		DisableInput(playerController);
	}
}


void APlayerCharacter::ShootBullet()
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Shoot Bulet func in player started")));
	UWorld* world = GetWorld();

	if (world)
	{
		//set the spawn parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		FVector bulletSpawnerVec;

		bulletSpawnerVec = FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z);

		if (playerBullet != nullptr)
		{
			if (playerFacingRight == true)
			{
				world->SpawnActor<ABullet>(playerBullet, bulletSpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Bullet Fired")));
			}
			else if (playerFacingRight == false)
			{
				world->SpawnActor<ABullet>(playerBullet, bulletSpawnerVec, FRotator(180.0f, 0.0f, 180.0f), SpawnParams);
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Bullet Fired!")));
			}
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Interface
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	//set the default animation value
	SetIdleAnimation();

	//create the audio manager handler that will play the audio in the main menu and play the background music
	if (IsValid(audioManager))
	{
		audioManagerHandler = Cast<AAudioManager>(UGameplayStatics::GetActorOfClass(GetWorld(), audioManager));
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APlayerCharacter::Attack);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::StopJumping);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <GettersandSetters>
//update the value of the player's coins
void APlayerCharacter::SetCoins(float value_)
{
	coins += value_;

	//update the players stats on the widget
	UpdatePlayerStats();
}

// Output the player's coins
const float APlayerCharacter::GetCoins() const
{
	return coins;
}

//update the value of the player's lives
void APlayerCharacter::SetLives(float value_)
{
	lives += value_;

	//update the players stats on the widget
	UpdatePlayerStats();
}

// Output the player's lives
const float APlayerCharacter::GetLives() const
{
	return lives;
}

//Output the players direction
const bool APlayerCharacter::GetPlayerDirection() const
{
	return playerFacingRight;
}

//update the value of the player's bullets
void APlayerCharacter::SetBullets(float bullets_)
{
	bulletsRemaining += bullets_;

	//update the players stats on the widget
	UpdatePlayerStats();
}

// Output the bullets remaining
const float APlayerCharacter::GetBulletsRemaining() const
{
	return bulletsRemaining;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Movement
void APlayerCharacter::Jump()
{
	Super::Jump();

	//play the jumping animation
	UpdateAnimation(JumpingAnimation);
	isAnimPlaying = true;

	//play the jumping sound
	audioManagerHandler->PlayAudio(jumpingSound);
}

void APlayerCharacter::StopJumping()
{
	Super::StopJumping();

	//play the idle animation
	SetIdleAnimation();
}

void APlayerCharacter::MoveRight(float movementValue_)
{
	//move the player along the x axis in the direction based of the player's input
	if (Controller && (movementValue_ != 0.0f))
	{
		AddMovementInput(FVector(1.0f * movementValue_, 0.0f, 0.0f));

		//setup the rotation of the controller based on the direction we are travelling
		const FVector PlayerVelocity = GetVelocity();
		float TravelDirection = PlayerVelocity.X;
		
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}

	//if the character is recieving moevemnt input, set the running animation
	//if the character is not recieving moevmenet input and no other animation is playing, set the animation to be idle
	if (movementValue_ != 0.f)
	{
		//play the running animation
		UpdateAnimation(RunningAnimation);
	}
	else
	{
		if (isAnimPlaying == false)
		{
			SetIdleAnimation();
		}
	}

	if (movementValue_ < 0.f)
	{
		playerFacingRight = false;
	}
	else if (movementValue_ > 0.f)
	{
		playerFacingRight = true;
	}

}

void APlayerCharacter::Attack()
{
	if (bulletsRemaining > 0)
	{
		//play the attacking animation
		UpdateAnimation(AttackAnimation);
		isAnimPlaying = true;

		//shoot the bullet from the player
		GetWorldTimerManager().SetTimer(animationTimer, this, &APlayerCharacter::SetIdleAnimation, 0.47f, false);
		ShootBullet();
		SetBullets(-1);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Handle Animations
//choose which animation to play
void APlayerCharacter::UpdateAnimation(EPlayerAnimation desiredAnimation_)
{
	switch (desiredAnimation_)
	{
		//play the idle animation
	case EPlayerAnimation::EIDLE:
		UpdateAnimation(IdleAnimation);
		break;

		//play the walking animation
	case EPlayerAnimation::EWALKING:
		UpdateAnimation(WalkingAnimation);
		break;

		//play the running animation
	case EPlayerAnimation::ERUNNING:
		UpdateAnimation(RunningAnimation);
		break;

		//play the jumping animation
	case EPlayerAnimation::EJUMPING:
		UpdateAnimation(JumpingAnimation);
		break;

		//play the cheering animation
	case EPlayerAnimation::ECHEERING:
		UpdateAnimation(CheerAnimation);
		break;

		//play the attacking animation
	case EPlayerAnimation::EATTACKING:
		UpdateAnimation(AttackAnimation);
		break;
	}
	
}

//set the animation for the character
void APlayerCharacter::UpdateAnimation(UPaperFlipbook* desiredAnimation_)
{
	//check if the new desired animation is not the current animation being played, if it is not, play the new desired animation
	if (GetSprite()->GetFlipbook() != desiredAnimation_)
	{
		GetSprite()->SetFlipbook(desiredAnimation_);
	}
}

void APlayerCharacter::SetIdleAnimation()
{
	//set the animation to be idle
	UpdateAnimation(IdleAnimation);

	//declare no animation is currently playing
	isAnimPlaying = false;

	//clear the animation timer
	GetWorldTimerManager().ClearTimer(animationTimer);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Widgets
//update the player stats on the display widget
void APlayerCharacter::UpdatePlayerStats()
{
	//find the current gamemode and update the players stats on the displayed widget
	AInPlayGameModeBase* gameMode = (AInPlayGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->UpdatePlayerStats(coins, lives, bulletsRemaining);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////