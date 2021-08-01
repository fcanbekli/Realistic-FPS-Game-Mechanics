// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PS_InteractableActor.generated.h"


/*
APS_InteractableActor is an base class for all intractable objects.
*/

UCLASS()
class PROJECTSHOCK_API APS_InteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APS_InteractableActor();


	virtual void Interact() PURE_VIRTUAL(UPS_Item, );

	UFUNCTION(BlueprintImplementableEvent)
		void Interact_BP();
};
