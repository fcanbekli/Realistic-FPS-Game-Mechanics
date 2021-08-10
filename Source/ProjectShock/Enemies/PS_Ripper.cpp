// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Enemies/PS_Ripper.h>


// Sets default values
APS_Ripper::APS_Ripper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APS_Ripper::BeginPlay()
{
	Super::BeginPlay();
	
}

void APS_Ripper::HitEnemy()
{
	UE_LOG(LogTemp, Warning, TEXT("Hit CPP"));
}


// void APS_Ripper::Hit()
// {
// 	UE_LOG(LogTemp, Warning, TEXT("TEST HIT"));
// }

// Called every frame
void APS_Ripper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




