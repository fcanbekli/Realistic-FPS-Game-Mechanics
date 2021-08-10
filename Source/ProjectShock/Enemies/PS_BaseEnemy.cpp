// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Enemies/PS_BaseEnemy.h>


// Sets default values
APS_BaseEnemy::APS_BaseEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APS_BaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void APS_BaseEnemy::HitFunciton()
{
	HitEnemy();
	HitEnemy_BP();
}

// Called every frame
void APS_BaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APS_BaseEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

