// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanPlayer.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Pacdot.h"

// Sets default values
APacmanPlayer::APacmanPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Velocity = FVector(0, 0, 0);

	PacmanDisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PacmanDisplayMesh"));
	PacmanDisplayMesh->SetupAttachment(GetCapsuleComponent());
}

// Called when the game starts or when spawned
void APacmanPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this,&APacmanPlayer::OnPacmanBeginOverlay);

}

// Called every frame
void APacmanPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APacmanPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveX", this, &APacmanPlayer::MoveX);
	PlayerInputComponent->BindAxis("MoveY", this, &APacmanPlayer::MoveY);
}

void APacmanPlayer::MoveX(float value)
{
	Velocity.X = value;
	Velocity.Y = 0;

	if (value > 0) 
	{
		SetActorRotation(FRotator(0,0,0));
	}
	else if(value < 0)
	{
		SetActorRotation(FRotator(0, 180, 0));
	}

	AddMovementInput(Velocity);
}

void APacmanPlayer::MoveY(float value)
{
	Velocity.Y = value;
	Velocity.X = 0;

	if (value > 0)
	{
		SetActorRotation(FRotator(0, 90, 0));
	}
	else if (value < 0)
	{
		SetActorRotation(FRotator(0, -90, 0));
	}

	AddMovementInput(Velocity);
}

void APacmanPlayer::OnPacmanBeginOverlay(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(APacdot::StaticClass())) {
		OtherActor->Destroy();
	}
}


