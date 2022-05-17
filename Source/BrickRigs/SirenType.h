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

	UPROPERTY(EditDefaultsOnly)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USoundCue> HornSound;

	UPROPERTY(EditDefaultsOnly)
	TSet<TSubclassOf<USoundCue>> SirenSounds;

	
	
};
