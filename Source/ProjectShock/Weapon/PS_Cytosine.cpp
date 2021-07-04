// Fill out your copyright notice in the Description page of Project Settings.


#include <ProjectShock/Weapon/PS_Cytosine.h>
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
// Sets default values
APS_Cytosine::APS_Cytosine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HandEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("HandEffect"));



}

// Called when the game starts or when spawned
void APS_Cytosine::BeginPlay()
{
	Super::BeginPlay();

	// 	if (HandEffect->GetAsset() && HandEffect->GetAsset()->IsValid())
// 	{
// 		UNiagaraComponent* NewEffect = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
// 			this,
// 			HandEffect->GetAsset(),
// 			FVector(0.f, 2.f, 0.f),
// 			FRotator(1),
// 			FVector(1),
// 			true,
// 			true,
// 			ENCPoolMethod::AutoRelease,
// 			true);
// 	}


}

// Called every frame
void APS_Cytosine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



