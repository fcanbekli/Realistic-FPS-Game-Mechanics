// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PS_HealthComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTSHOCK_API UPS_HealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPS_HealthComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health, meta = (AllowPrivateAccess = "true"))
		float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Health, meta = (AllowPrivateAccess = "true"))
		float Health;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Health)
		void Heal(float HealAmount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Health)
		void Damage(float Damage);


	UFUNCTION(BlueprintCallable, Category = Health)
		float GetHealth();

	UFUNCTION(BlueprintCallable, Category = Health)
		bool IsDead();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
