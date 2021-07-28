// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Environment/PS_LightPreset.h>
// Sets default values
APS_LightPreset::APS_LightPreset()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun"));

	Skylight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Skylight"));
	Fog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Fog"));
	SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
	Sun->bUsedAsAtmosphereSunLight = true;
}

// Called when the game starts or when spawned
void APS_LightPreset::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APS_LightPreset::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

