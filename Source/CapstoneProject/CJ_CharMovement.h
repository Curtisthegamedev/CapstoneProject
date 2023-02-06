// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CJ_CharMovement.generated.h"

UCLASS()
class CAPSTONEPROJECT_API ACJ_CharMovement : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACJ_CharMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Add Componet to CharMovement
	UPROPERTY()
		class UParticleSystemComponent* MyParticleSystem;

	UPROPERTY()
		class UCollidingPawnMovementComponent* MyMovementComponent;

	virtual UPawnMovementComponent* GetMovementComponent() const override; 

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
