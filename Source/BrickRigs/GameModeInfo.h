// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameModeInfo.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API UGameModeInfo : public UObject
{
	GENERATED_BODY()
    // ~Properties
        // The game mode reference
        UPROPERTY(EditDefaultsOnly, Category = GameMode, meta = (MetaClass = "GameModeBase"))
            FSoftClassPath GameModeClass;
        // Name of the game mode displayed in the UI
        UPROPERTY(EditDefaultsOnly, Category = GameMode)
            FText DisplayName;
        // The short alias and prefix used for game mode specific levels
        UPROPERTY(EditDefaultsOnly, Category = GameMode)
            FString Alias;
        // Whether this game mode requires levels to have a sub level with the alias as a prefix to be supported
        UPROPERTY(EditDefaultsOnly, Category = GameMode)
            bool bRequiresPrefixedSubLevel;
        // Whether the round duration can be used for this mode
        UPROPERTY(EditDefaultsOnly, Category = GameMode)
            bool bUsesRoundDuration;
        // Whether sandbox settings can be used for this mode
        UPROPERTY(EditDefaultsOnly, Category = GameMode)
            bool bUsesSandboxSettings;
        // ~Properties
	
};
