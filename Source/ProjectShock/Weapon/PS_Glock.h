// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/Weapon/PS_GlockData.h>
#include <ProjectShock/Player/PS_PlayerCharacter.h>
#include "DrawDebugHelpers.h"
#include <ProjectShock/GameModes/PS_HUD.h>
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include <ProjectShock/Weapon/PS_Weapon.h>
#include "PS_Glock.generated.h"

UCLASS()
class PROJECTSHOCK_API APS_Glock : public APS_Weapon
{
	GENERATED_BODY()
public:

	UAnimMontage* GetRandomShootingAnimation();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Hit)
		FHitResult HitResults;


	FHitResult GetHitResult();

	UFUNCTION(BlueprintCallable)
		void ShootEmpty();

	UFUNCTION(BlueprintCallable)
		void ShootLastAmmo();

	UFUNCTION(BlueprintCallable)
		void Shoot();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UPS_GlockData* GlockDataAsset;

	UFUNCTION(BlueprintCallable)
		void FireGlock();

};
