// Fill out your copyright notice in the Description page of Project Settings.
//Health & damage system programmed by Tristan James
//Link to video: https://www.youtube.com/watch?v=oAswbd1Ngls
//Link for vs to translate code over to unreal 4/5: https://www.unrealengine.com/marketplace/en-US/product/362651520df94e4fa65492dbcba44ae2

#include "YTHealthComponent.h"
// Sets default values for this component's properties
UYTHealthComponent::UYTHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	DefaultHealth = 100;
	Health = DefaultHealth;
	// ...
}


// Called when the game starts
void UYTHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();
	if (Owner) {
		Owner->OnTakeAnyDamage.AddDynamic(this, &UYTHealthComponent::TakeDamage);
	}
	
}

void UYTHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0) {
		return;
	}
	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
}




