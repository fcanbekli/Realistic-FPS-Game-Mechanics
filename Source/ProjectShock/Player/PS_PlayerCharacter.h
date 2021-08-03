// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <ProjectShock/Inventory/PS_InventoryComponent.h>
#include <ProjectShock/Inventory/PS_InteractableActor.h>
#include <ProjectShock/Player/PS_PlayerProperties.h>
#include <ProjectShock/Weapon/PS_Weapon.h>
#include "Components/ChildActorComponent.h"
#include "Camera/CameraComponent.h"
#include "PS_PlayerCharacter.generated.h"



UENUM(BlueprintType)
enum EWeapon
{
	Unarmed     UMETA(DisplayName = "Unarmed"),
	Glock      UMETA(DisplayName = "Glock"),
};


UCLASS()
class PROJECTSHOCK_API APS_PlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APS_PlayerCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FPS_Camera;

// 	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
// 		class UPS_InventoryComponent* InventoryComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UChildActorComponent* Weapon;


	UFUNCTION(BlueprintCallable)
		void Interact(APS_InteractableActor* LootActor);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE UCameraComponent* GetCameraComponent() const { return FPS_Camera; }

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		float Health;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		float SyntheticDNA;


	/*
	============= BP_EVENT
	ChangeWeapon

	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "ChangeWeapon"))
		void ChangeWeapon();
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UPS_PlayerProperties* PlayerPropertiesData;	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
		TEnumAsByte<EWeapon> ActiveWeapon;
};
