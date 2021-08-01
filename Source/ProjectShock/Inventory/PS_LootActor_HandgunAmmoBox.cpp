// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Inventory/PS_LootActor_HandgunAmmoBox.h>

void APS_LootActor_HandgunAmmoBox::Use()
{
	UE_LOG(LogTemp, Warning, TEXT("HANDGUN HERE"));
}

void APS_LootActor_HandgunAmmoBox::Interact()
{
	Destroy();
	UE_LOG(LogTemp, Warning, TEXT("Interaction"));
}

