// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Runtime/GameplayTags/Classes/GameplayTagContainer.h>
#include "ItemStaticInfo.generated.h"





/**
 * 
 */
UCLASS(Blueprintable)
class BRICKRIGS_API UItemStaticInfo : public UObject
{
	GENERATED_BODY()

public:
    // Whether the item can ever be equipped
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        bool bCanBeEquipped;
    // The main static mesh for this item
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        UStaticMesh* StaticMesh;
    // The optional skeletal mesh for this item
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    // Base material override for the static and skeletal mesh
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        UMaterialInterface* MaterialOverride;
    // An optional alternative mesh used to render the thumbnail
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        UStaticMesh* ThumbnailStaticMesh;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        float MaxDrawDistance;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        TSubclassOf<UAnimInstance> AnimInstanceClass;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        UPhysicalMaterial* PhysicalMaterial;
    // The display name of this item to be shown in the UI
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
        FText DisplayName;
    // The higher the value the higher items of this type will be displayed in the loot container
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
        int32 InventorySortPriority;
    // Item type tags
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        FGameplayTagContainer ItemTags;
    // Inventory slot tags
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        FGameplayTagContainer SlotTags;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        float Price;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
        float Mass;
	
};