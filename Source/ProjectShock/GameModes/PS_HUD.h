// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/Player/PS_HUD_Crosshair.h>
#include "GameFramework/HUD.h"
#include "PS_HUD.generated.h"

/**
 * 
 * 
 * 
 */


UENUM(BlueprintType)
enum class ECrosshairState : uint8 {
	AIM_IN = 0 UMETA(DisplayName = "AIM_IN"),
	AIM_OUT = 1  UMETA(DisplayName = "AIM_OUT"),
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
		void ModifyCrosshairState(ECrosshairState CrosshairState);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
		UPS_HUD_Crosshair* CrosshairWidget;
};
