// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "PS_PlayerCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API APS_PlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:	
	
	/*
	============= BP_EVENT
	AimZoomIn
	Zoom in while going deep aim
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "AimZoomIn"))
		void AimZoomIn();


	/*
	============= BP_EVENT
	AimZoomOut
	Zoom out while going out from deep aim
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "AimZoomOut"))
		void AimZoomOut();
};
