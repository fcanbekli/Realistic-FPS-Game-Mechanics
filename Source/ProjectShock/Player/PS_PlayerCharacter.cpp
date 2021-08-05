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

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	Weapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("GunSlot"));
	Weapon->SetChildActorClass(APS_Weapon::StaticClass());
	Weapon->SetupAttachment(GetMesh());


	HealthComponent = CreateDefaultSubobject<UPS_HealthComponent>(TEXT("HealthComponent"));


	Health = 100.0f;
	SyntheticDNA = 100.0f;

	ActiveWeapon = EWeapon::Unarmed; 
}

// Called when the game starts or when spawned
void APS_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}


void APS_PlayerCharacter::Interact(APS_InteractableActor* InteractableActor)
{
	if (InteractableActor) {
		InteractableActor->Interact();
		InteractableActor->Interact_BP();
	}
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

