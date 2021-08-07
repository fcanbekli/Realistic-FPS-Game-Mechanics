// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PS_HUD_AmmoBar.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API UPS_HUD_AmmoBar : public UUserWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "UpdateAmmoInMagazine"))
		void UpdateAmmoInMagazine();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "UpdateAmmoInInventory"))
		void UpdateAmmoInInventory();
};
