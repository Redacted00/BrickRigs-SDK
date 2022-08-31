// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "BrickWorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API ABrickWorldSettings : public AWorldSettings
{
	GENERATED_BODY()
        // Bounding box of the ocean water
    UPROPERTY(EditDefaultsOnly, Category = World)
        FBox WaterBounds;
    // Used to determine the altitude
    UPROPERTY(EditDefaultsOnly, Category = World)
        float SeaLevel;
};
