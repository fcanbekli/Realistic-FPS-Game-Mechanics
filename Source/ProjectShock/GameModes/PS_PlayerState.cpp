// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/GameModes/PS_PlayerState.h>


APS_PlayerState::APS_PlayerState()
{
	InventoryComponent = CreateDefaultSubobject<UPS_InventoryComponent>(TEXT("InventoryComponent"));

	bIsAiming = false;
}
