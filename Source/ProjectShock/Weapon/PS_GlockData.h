// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"

#include "Engine/DataAsset.h"
#include "PS_GlockData.generated.h"



UCLASS()
class PROJECTSHOCK_API UPS_GlockData : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* AimShootingEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* ShootingLastAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* GlockShooting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* AimShooting1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* AimShooting2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* AimShooting3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* AimShooting4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* GlockShootSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* GlockEmptySound;
};
