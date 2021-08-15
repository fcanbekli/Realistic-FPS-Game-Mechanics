// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/GameModes/PS_PlayerState.h>
#include <ProjectShock/Player/PS_PlayerCharacter.h>
#include "Kismet/GameplayStatics.h"
#include <ProjectShock/Inventory/PS_LootActor.h>
#include "PS_LootActor_Handgun.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API APS_LootActor_Handgun : public APS_LootActor
{
	GENERATED_BODY()
public:
	void Use() override;
	
	void Interact() override;
};
