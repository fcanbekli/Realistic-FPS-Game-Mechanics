// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Inventory/Items/PS_TestItem.h>

void UPS_TestItem::Use()
{
	UE_LOG(LogTemp, Warning, TEXT("TEST ITEM"));
}
