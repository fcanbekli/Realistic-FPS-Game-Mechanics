// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PS_ERipperState.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API UPS_ERipperState : public UObject
{
	GENERATED_BODY()
	
};


UENUM(BlueprintType)
enum class ERipperState : uint8 {
	PASSIVE = 0			UMETA(DisplayName = "PASSIVE"),
	PATROL = 1			UMETA(DisplayName = "PATROL"),
	INVESTIGATE = 2		UMETA(DisplayName = "INVESTIGATE"),
	HARASS = 3			UMETA(DisplayName = "HARASS"),
	AGGRESSIVE = 4		UMETA(DisplayName = "AGGRESSIVE"),
	DEAD = 5			UMETA(DisplayName = "DEAD"),
};