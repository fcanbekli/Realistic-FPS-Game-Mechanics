// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/Player/PS_HUD_Crosshair.h>
#include "GameFramework/HUD.h"
#include "PS_HUD.generated.h"
UENUM(BlueprintType)
enum class ECrosshairAction : uint8 {
	SHOW_DEFAULT_CROSSHAIR = 0			UMETA(DisplayName = "SHOW_DEFAULT_CROSSHAIR"),
	DISAPPEAR_DEFAULT_CROSSHAIR = 1			UMETA(DisplayName = "DISAPPEAR_DEFAULT_CROSSHAIR"),
	SHOOT_DEFAULT = 2		UMETA(DisplayName = "SHOOT_DEFAULT"),
	SHOOT_ENEMY = 3			UMETA(DisplayName = "SHOOT_ENEMY"),
	SHOOT_ARMOR = 4		UMETA(DisplayName = "SHOOT_ARMOR"),
	SHOOT_HEAD = 5			UMETA(DisplayName = "SHOOT_HEAD"),
};


UCLASS()
class PROJECTSHOCK_API APS_HUD : public AHUD
{
	GENERATED_BODY()
public:

	/*
	============= BP_EVENT
	FireCameraShake
	Shake camera when gun fired
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "FireCameraShake"))
		void FireCameraShake();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "UpdateAmmoBar"))
		void UpdateAmmoBar();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "ModifyCrosshairState"))
		void ModifyCrosshairState(ECrosshairAction CrosshairState);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
		UPS_HUD_Crosshair* CrosshairWidget;
};
