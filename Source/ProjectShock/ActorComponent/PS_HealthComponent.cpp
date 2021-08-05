// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/ActorComponent/PS_HealthComponent.h>


// Sets default values for this component's properties
UPS_HealthComponent::UPS_HealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


void UPS_HealthComponent::Heal_Implementation(float HealAmount)
{
	Health += HealAmount;
}

void UPS_HealthComponent::Damage_Implementation(float Damage)
{
	Health -= Damage;
}

float UPS_HealthComponent::GetHealth()
{
	return Health;
}

bool UPS_HealthComponent::IsDead()
{
	if (Health == 0) {
		return true;
	}
	else {
		return false;
	}
}

// Called when the game starts
void UPS_HealthComponent::BeginPlay()
{
	Super::BeginPlay();
	Health = MaxHealth;
	// ...
	
}


// Called every frame
void UPS_HealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

