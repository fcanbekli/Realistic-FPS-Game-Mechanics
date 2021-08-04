// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Enemies/PS_RipperAIController.h>


void APS_RipperAIController::BeginPlay()
{
	RunBehaviorTree(BehavioralTree);

//	UseBlackboard(BlackboardDataAsset, Blackboard);
// 	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackBoardComp"));
//  BehaviorComp =	 CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorComp"));

}

void APS_RipperAIController::OnPossess(APawn* InPawn)  
{
	Super::OnPossess(InPawn);
	RipperCharacter = Cast<APS_Ripper>(InPawn);
}
