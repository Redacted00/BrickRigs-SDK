// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SoundCue.h"
#include "SirenType.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BRICKRIGS_API USirenType : public UObject
{
	GENERATED_BODY()
public:
    // ~Properties
    UPROPERTY(EditDefaultsOnly, Category = Siren)
        FText DisplayName;
    UPROPERTY(EditDefaultsOnly, Category = Siren)
        USoundBase* HornSound;
    UPROPERTY(EditDefaultsOnly, Category = Siren)
        TArray<USoundBase*> SirenSounds;
    // ~Properties
};