// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PS_Weapon.generated.h"

UCLASS()
class PROJECTSHOCK_API APS_Weapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APS_Weapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = SkeletalMesh)
		class USkeletalMeshComponent* WeaponMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*
	============= BP_EVENT
	FireWeapon
	Fire weapon
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "FireWeapon"))
		void FireWeapon();

	/*
	============= BP_EVENT
	Reload
	Reload Weapon
	=============
	*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "Reload"))
		void Reload();


	// Speed of fire
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalMesh)
		int FireRate;

	// Maximum capacity of the gun, constant
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalMesh)
		int MaxMagazineSize;

	// Actual capacity of the gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalMesh)
		int CurrentMagazineSize;
};
