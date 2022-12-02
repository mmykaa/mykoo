// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCore/Entities/Player/PlayerBehaviour.h"

// Sets default values
APlayerBehaviour::APlayerBehaviour()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerBehaviour::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerBehaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerBehaviour::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

