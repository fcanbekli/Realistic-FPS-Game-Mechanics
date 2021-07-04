// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "PS_Cytosine.generated.h"

UCLASS()
class PROJECTSHOCK_API APS_Cytosine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APS_Cytosine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
		UNiagaraComponent* HandEffect;


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "UseCytosine"))
		void Use();

};
