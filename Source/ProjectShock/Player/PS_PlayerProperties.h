// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PS_PlayerProperties.generated.h"


USTRUCT(BlueprintType)
struct FItemInfo {

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
		float WalkSpeed;

	UPROPERTY(EditAnywhere)
		float BackWalkSpeed;

	UPROPERTY(EditAnywhere)
		float SprintSpeed;
};

UCLASS()
class PROJECTSHOCK_API UPS_PlayerProperties : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BackWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SprintSpeed;
};
