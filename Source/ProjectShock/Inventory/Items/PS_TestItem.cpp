// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Inventory/Items/PS_TestItem.h>

void UPS_TestItem::Use(class APS_PlayerCharacter* Character)
{
	UE_LOG(LogTemp, Warning, TEXT("TEST ITEM"));
}
