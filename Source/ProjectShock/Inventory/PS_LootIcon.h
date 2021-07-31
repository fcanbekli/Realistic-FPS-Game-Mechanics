// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PS_LootIcon.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API UPS_LootIcon : public UUserWidget
{
	GENERATED_BODY()
public:


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "FadeOut"))
		void FadeOut();



};
