// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <ProjectShock/Player/PS_PlayerCharacter.h>
#include <ProjectShock/Player/PS_PlayerCameraManager.h>
#include <ProjectShock/GameModes/PS_PlayerState.h>
#include <ProjectShock/GameModes/PS_HUD.h>
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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		APS_PlayerState* PlayerStateObject;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		APS_PlayerCameraManager* PlayerCameraManagerObject;

	FTimerHandle SideTransitionTimer;

		/*
		============= Timer Function
		SetIsAimingFalse

		=============
		*/
		void SetIsAimingFalse();

		/*
		============= Function
		MoveForward
		
		=============
		*/
		UFUNCTION(BlueprintCallable)
		void MoveForward(float Value);

		/*
		============= Function
		MoveSide

		=============
		*/
		UFUNCTION(BlueprintCallable)
		void MoveSide(float Value);

		/*
		============= Function
		RightTrigger

		=============
		*/
		UFUNCTION(BlueprintCallable)
		void RightTrigger();


		/*
		============= Function
		LeftThumbstickButton

		=============
		*/
		UFUNCTION(BlueprintCallable)
		void LeftThumbstickButton();

		/*
		============= Function
		RightThumbstickButton

		=============
		*/
		UFUNCTION(BlueprintCallable)
		void RightThumbstickButton();

		/*
		============= Function
		SetIconInvisible
		Reload weapon
		=============
		*/
		UFUNCTION(BlueprintCallable)
		void LeftFaceButton();


		/*
		============= Function
		LeftShoulderButton

		=============
		*/
		UFUNCTION(BlueprintCallable)
		void LeftShoulderButton();


		/*
		============= Function
		LeftShoulderButton

		=============
		*/
		UFUNCTION(BlueprintCallable)
		void LeftTriggerButton();

		/*
		============= Function
		TurnMovement
		Camera left right rotation
		=============
		*/
		UFUNCTION(BlueprintCallable, Category = "Weapon")
			void TurnMovement(float Rate);

		/*
		============= Function
		LoopUpMovement
		Camera up down rotation 
		=============
		*/
		UFUNCTION(BlueprintCallable, Category = "Weapon")
			void LoopUpMovement(float Rate);


		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
			float BaseTurnRate;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
			float BaseLookUpRate;

};
