// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PS_ItemData.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSHOCK_API UPS_ItemData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPS_ItemData();
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText UseActionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		class UStaticMesh* PickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		class UTexture2D* Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText ItemDisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		class UPS_InventoryComponent* OwningInventory;

	virtual void Use() PURE_VIRTUAL(UPS_Item, );

	UFUNCTION(BlueprintImplementableEvent)
		void OnUse();
};
