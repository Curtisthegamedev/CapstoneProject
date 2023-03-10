//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "Components/ActorComponent.h"
//#include "YTHealthComponent.generated.h"
//
//
//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
//class CAPSTONEPROJECT_API UYTHealthComponent : public UActorComponent
//{
//	GENERATED_BODY()
//
//public:	
//	// Sets default values for this component's properties
//	UYTHealthComponent();
//
//protected:
//	// Called when the game starts
//	virtual void BeginPlay() override;
//
////public:	
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
//	float DefaultHealth;
//
//	UPROPERTY(BlueprintReadOnly)
//	float Health;
//
//	//AActor*, DamagedActor, float, Damage, const class UDamageType*, DamageType, class AController*, InstigatedBy, AActor* DamageCauser
//	UFUNCTION()
//	void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
//};
