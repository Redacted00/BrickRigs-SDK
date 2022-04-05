// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemStaticInfo.h"
#include "WearableStaticInfo.generated.h"

/**
 * 
 */


UENUM(BlueprintType)
enum class EWearableTag : uint8
{
    Pants,
    Shirt
};


UCLASS(Blueprintable)
class BRICKRIGS_API UWearableStaticInfo : public UItemStaticInfo
{
	GENERATED_BODY()
	
public:
    // ~Properties
    // The type of wearable, i.e. a shirt, pants etc.
    UPROPERTY(EditDefaultsOnly, Category = Wearable)
        EWearableTag WearableType;
    // ~Properties

};
