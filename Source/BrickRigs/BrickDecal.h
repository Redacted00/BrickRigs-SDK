// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BrickDecal.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, HideCategories = Object)
class BRICKRIGS_API UBrickDecal : public UObject
{
    GENERATED_BODY()
    
public:
    // ~Properties
    UPROPERTY(EditDefaultsOnly, Category = BrickMaterial)
        UTexture2D* Texture;
    // ~Properties
};
