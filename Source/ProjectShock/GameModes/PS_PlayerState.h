// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include <ProjectShock/Inventory/PS_InventoryComponent.h>
#include "PS_PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API APS_PlayerState : public APlayerState
{
	GENERATED_BODY()
public:

	APS_PlayerState();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UPS_InventoryComponent* InventoryComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsAiming;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsDeepAiming;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsSprinting;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsCrouching;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsGuarding;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsReloding;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsHandgun;


};
