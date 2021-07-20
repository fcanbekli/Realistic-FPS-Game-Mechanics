// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/Player/PS_PlayerCharacter.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include <ProjectShock/GameModes/PS_PlayerController.h>
#include "Animation/AnimInstance.h"
#include "PS_PlayerAnimation.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API UPS_PlayerAnimation : public UAnimInstance
{
	GENERATED_BODY()
public:

	UPS_PlayerAnimation();
	UFUNCTION(BlueprintCallable)
		void UpdateAnimationProperties(float DeltaTime);

	virtual void NativeInitializeAnimation() override;

	void TurnInPlace();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivate = "true"))
		class APS_PlayerCharacter* PlayerCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivate = "true"))
		float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivate = "true"))
		bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivate = "true"))
		bool bIsAccelerating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivate = "true"))
		float XAxisValue;

		float CharacterYaw;

		float CharacterYawLastFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivate = "true"))
		float RootYawOffset;

};
