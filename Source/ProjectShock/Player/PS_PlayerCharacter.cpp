	// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Player/PS_PlayerCharacter.h>

// Sets default values
APS_PlayerCharacter::APS_PlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FPS_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPS_Camera"));
	FPS_Camera->SetupAttachment(RootComponent);
	FPS_Camera->bUsePawnControlRotation = true;


	Weapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("GunSlot"));
	Weapon->SetChildActorClass(APS_Weapon::StaticClass());
	Weapon->SetupAttachment(GetMesh());

	Cytosine = CreateDefaultSubobject<UChildActorComponent>(TEXT("Cytosine"));
	Cytosine->SetChildActorClass(APS_Weapon::StaticClass());
	Cytosine->SetupAttachment(GetMesh());

	InventoryComponent = CreateDefaultSubobject<UPS_InventoryComponent>(TEXT("InventoryComponent"));

	Health = 100.0f;
	SyntheticDNA = 100.0f;
	bIsAiming = false;
}

// Called when the game starts or when spawned
void APS_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APS_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APS_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

