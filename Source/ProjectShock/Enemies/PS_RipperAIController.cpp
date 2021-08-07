// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Enemies/PS_RipperAIController.h>


APS_RipperAIController::APS_RipperAIController()
{
	AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Sense"));
	
	// SightSense
	ConfigureSightSence(Sight);
}
// 
// void APS_RipperAIController::BeginPlay()
// {
// 
// 
// //	UseBlackboard(BlackboardDataAsset, Blackboard);
// // 	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackBoardComp"));
// //  BehaviorComp =	 CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorComp"));
// 
// }

void APS_RipperAIController::OnPossess(APawn* InPawn)  
{
	Super::OnPossess(InPawn);
	RunBehaviorTree(BehavioralTree);
	RipperCharacter = Cast<APS_Ripper>(InPawn);
}

void APS_RipperAIController::ConfigureSightSence(UAISenseConfig_Sight* SightConfig)
{
	if (SightConfig)
	{
		// Sight configuration
		SightConfig->SightRadius = 500;
		SightConfig->LoseSightRadius = 600;
		SightConfig->PeripheralVisionAngleDegrees = 60.f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;

		AIPerception->ConfigureSense(*SightConfig);
	}




}

void APS_RipperAIController::ChangeAIState_Implementation(ERipperState NewState)
{
	RipperCharacter->RipperState = NewState;
	GetBlackboardComponent()->SetValueAsEnum("RipperState", (uint8)RipperCharacter->RipperState);
}