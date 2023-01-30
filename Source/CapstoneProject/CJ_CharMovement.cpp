// Fill out your copyright notice in the Description page of Project Settings.


#include "CJ_CharMovement.h"

// Sets default values
ACJ_CharMovement::ACJ_CharMovement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACJ_CharMovement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACJ_CharMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACJ_CharMovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

