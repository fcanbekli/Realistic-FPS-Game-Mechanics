// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/Inventory/PS_LootActor.h>
#include "PS_LootActor_HandgunAmmoBox.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API APS_LootActor_HandgunAmmoBox : public APS_LootActor
{
	GENERATED_BODY()
	void Use() override;

	void Interact() override;
};
