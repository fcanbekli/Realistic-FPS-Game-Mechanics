// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Enemies/PS_RipperAIController.h>


void APS_RipperAIController::BeginPlay()
{
	RunBehaviorTree(BehavioralTree);

}
