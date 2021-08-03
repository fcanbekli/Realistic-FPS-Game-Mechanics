// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ProjectShock/Enemies/PS_BaseEnemy.h>

#include "GameFramework/Actor.h"
#include "PS_Ripper.generated.h"

UCLASS()
class PROJECTSHOCK_API APS_Ripper : public APS_BaseEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APS_Ripper();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
