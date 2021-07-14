// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Inventory/PS_InventoryComponent.h>

// Sets default values for this component's properties
UPS_InventoryComponent::UPS_InventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPS_InventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPS_InventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPS_InventoryComponent::UseItem()
{
	items[0]->Use();
	// TODO: On Use Currently not working,
	items[0]->OnUse();
}

