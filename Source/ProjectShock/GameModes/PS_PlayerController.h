// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <ProjectShock/Player/PS_PlayerCharacter.h>
#include "PS_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API APS_PlayerController : public APlayerController
{
	GENERATED_BODY()
		APS_PlayerController();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		APS_PlayerCharacter* PlayerCharacter;



		UFUNCTION(BlueprintCallable)
		void MoveForward(float Value);

		UFUNCTION(BlueprintCallable)
		void MoveSide(float Value);


		UFUNCTION(BlueprintCallable, Category = "Weapon")
			void TurnMovement(float Rate);

		UFUNCTION(BlueprintCallable, Category = "Weapon")
			void LoopUpMovement(float Rate);


		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
			float BaseTurnRate;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
			float BaseLookUpRate;

};
