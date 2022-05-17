// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SoundNodeFirearm.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API USoundNodeFirearm : public USoundNode
{
	GENERATED_BODY()
	
	    UPROPERTY(EditAnywhere, Category = Firearm)
            USoundWave* FireSound;
        UPROPERTY(EditAnywhere, Category = Firearm)
            FFloatInterval PitchModulation;
        UPROPERTY(EditAnywhere, Category = Firearm)
            FFloatInterval VolumeModulation;
        UPROPERTY(EditAnywhere, Category = Firearm)
            float ModulationPeriod;
    #if WITH_EDITORONLY_DATA
        UPROPERTY(EditAnywhere, Category = Firearm)
            float EditorFireDelay;
    #endif
	
};
