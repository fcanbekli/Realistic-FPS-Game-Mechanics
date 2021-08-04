// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include <ProjectShock/Enemies/PS_Ripper.h>
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"


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
		virtual void OnPossess(APawn* InPawn) override;
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI, meta = (AllowPrivateAccess = "true"))
			APS_Ripper* RipperCharacter;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI, meta = (AllowPrivateAccess = "true"))
			class UBehaviorTree* BehavioralTree;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI, meta = (AllowPrivateAccess = "true"))
			class UBlackboardData* BlackboardDataAsset;


		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI, meta = (AllowPrivateAccess = "true"))
			class UBlackboardComponent* BlackboardComp;


};
