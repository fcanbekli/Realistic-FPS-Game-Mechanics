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
	PASSIVE = 0 UMETA(DisplayName = "PASSIVE"),
	HARASSER = 1  UMETA(DisplayName = "HARASSER"),
	AGGRESSIVE = 2     UMETA(DisplayName = "AGGRESSIVE"),
};