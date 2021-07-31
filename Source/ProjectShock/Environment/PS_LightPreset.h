// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "PS_LightPreset.generated.h"

UCLASS()
class PROJECTSHOCK_API APS_LightPreset : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APS_LightPreset();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every fra me
	virtual void Tick(float DeltaTime) override;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Light, meta = (AllowPrivate = "true"))
		UDirectionalLightComponent* Sun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Light, meta = (AllowPrivate = "true"))
		USkyLightComponent* Skylight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Light, meta = (AllowPrivate = "true"))
		USkyAtmosphereComponent* SkyAtmosphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Light, meta = (AllowPrivate = "true"))
		UExponentialHeightFogComponent* Fog;

};
