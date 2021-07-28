// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Environment/PS_Fog.h>

// Sets default values
APS_Fog::APS_Fog()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APS_Fog::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APS_Fog::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

