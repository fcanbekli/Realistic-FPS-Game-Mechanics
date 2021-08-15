// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Inventory/PS_LootActor_Handgun.h>

void APS_LootActor_Handgun::Use()
{
	UE_LOG(LogTemp, Warning, TEXT("USE HERE"));
}

void APS_LootActor_Handgun::Interact()
{
	Destroy();
	Interact_BP();
	Cast<APS_PlayerState>(Cast<APS_PlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->GetPlayerState())->bIsHandgun = true;
	Cast<APS_PlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->PickWeapon();
}
