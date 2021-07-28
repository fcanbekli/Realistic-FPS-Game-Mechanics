// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include <ProjectShock/Player/PS_PlayerCharacter.h>
#include <ProjectShock/Weapon/PS_Weapon.h>
#include "PS_WeaponAnimation.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API UPS_WeaponAnimation : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPS_WeaponAnimation();

	UFUNCTION(BlueprintCallable)
		void UpdateAnimationProperties(float DeltaTime);

	virtual void NativeInitializeAnimation() override;



	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivate = "true"))
		class APS_Weapon* PlayerWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalMesh)
		int FireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalMesh)
		int MaxMagazineSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalMesh)
		int CurrentMagazineSize;
};
