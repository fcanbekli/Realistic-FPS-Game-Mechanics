// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PS_BaseEnemy.generated.h"

UCLASS()
class PROJECTSHOCK_API APS_BaseEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APS_BaseEnemy();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void HitEnemy() PURE_VIRTUAL(UPS_Item, );

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void HitEnemy_BP();

	UFUNCTION(BlueprintCallable)
		void HitFunciton();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
