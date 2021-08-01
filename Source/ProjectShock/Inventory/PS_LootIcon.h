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

	//---
	// Icon meaning first appear icon while getting closer to object, interaction refers interaction button icon(X button)
	//--

	/*
	============= BP_EVENT
	SetIconVisible
	Play animation makes icon visible
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "SetIconVisible"))
		void SetIconVisible();

	/*
	============= BP_EVENT
	SetIconInvisible
	Reverse	play animation makes icon invisible
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "SetIconInvisible"))
		void SetIconInvisible();

	/*
	============= BP_EVENT
	SetInteractionVisible
	Play animation makes interaction visible
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "SetInteractionVisible"))
		void SetInteractionVisible();

	/*
	============= BP_EVENT
	SetInteractionInvisible
	Reverse	play animation makes interaction invisible
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "SetInteractionInvisible"))
		void SetInteractionInvisible();

};
