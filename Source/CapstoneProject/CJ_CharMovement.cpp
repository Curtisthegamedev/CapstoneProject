// Fill out your copyright notice in the Description page of Project Settings.


#include "CJ_CharMovement.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CJ_PawnMovementComponent.h"

// Sets default values
ACJ_CharMovement::ACJ_CharMovement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setup The Collider
	USphereComponent* SphereColliderComp = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereColliderComp; 
	SphereColliderComp->InitSphereRadius(30.0f); 
	SphereColliderComp->SetCollisionProfileName(TEXT("Pawn"));
	//Setup The Visual
	//UStaticMeshComponent* CharacterVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	//CharacterVisual->SetupAttachment(RootComponent); 
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> CharacterVisualAsset(TEXT("\CapstoneProject\Content\Characters\Alice\Model\X_Bot.uasset")); 
	//if (CharacterVisualAsset.Succeeded())
	//{
	//	CharacterVisual->SetStaticMesh(CharacterVisualAsset.Object);
	//	CharacterVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f)); 
	//	CharacterVisual->SetWorldScale3D(FVector(0.8f)); 
	//}

	//Particle system
	//MyParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MovementParticles"));
	//MyParticleSystem->SetupAttachment(CharacterVisual)

	//Spring Arm Camera SetUp.
	USpringArmComponent* SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;

	UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera")); 
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName); 

	//Player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	MyMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>(TEXT("CustomMovementComponent"));
	MyMovementComponent->UpdatedComponent = RootComponent; 
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

