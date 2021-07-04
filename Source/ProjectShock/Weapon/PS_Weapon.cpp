// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Weapon/PS_Weapon.h>

// Sets default values
APS_Weapon::APS_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent >(TEXT("WeaponMesh"));
}

// Called when the game starts or when spawned
void APS_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APS_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

