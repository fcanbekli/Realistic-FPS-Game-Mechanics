// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/Inventory/PS_Item.h>
#include "PS_TestItem.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API UPS_TestItem : public UPS_Item
{
	GENERATED_BODY()
protected:
	virtual void Use() override;
};
