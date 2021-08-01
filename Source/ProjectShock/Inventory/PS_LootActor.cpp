// Fill out your copyright notice in the Description page of Project Settings.



#include <ProjectShock/Inventory/PS_LootActor.h>

// Sets default values
APS_LootActor::APS_LootActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->SetRootComponent(RootComponent);	
	LootMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("LootMesh"));
	LootMesh->SetupAttachment(RootComponent);
	LootIconWidget = CreateAbstractDefaultSubobject<UWidgetComponent >(TEXT("LootIconWidget"));
	LootIconWidget->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APS_LootActor::BeginPlay()
{
	Super::BeginPlay();
	if (ItemData->PickupMesh) {
		LootMesh->SetStaticMesh(ItemData->PickupMesh);
	}	
}

// Called every frame
void APS_LootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

