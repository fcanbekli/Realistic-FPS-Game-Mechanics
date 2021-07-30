// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PS_HUD.generated.h"

/**
 * 
 */
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
};
