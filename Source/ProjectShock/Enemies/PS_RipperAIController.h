// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PS_RipperAIController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API APS_RipperAIController : public AAIController
{
	GENERATED_BODY()
public:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
			class UBehaviorTree* BehavioralTree;
};
