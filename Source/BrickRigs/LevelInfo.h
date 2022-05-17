// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelInfo.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API ULevelInfo : public UObject
{
    GENERATED_BODY()

public:
    // ~Properties
    // The short name of the map, without game mode prefix or directory information
    UPROPERTY(EditDefaultsOnly, Category = Level, meta = (AllowedClasses = "World"))
        FSoftObjectPath Level;
    // Generated list of (sub-) levels used for specific game modes
    UPROPERTY(Transient, VisibleDefaultsOnly, Category = Level)
        TArray<FSoftObjectPath> GameModeSpecificLevels;
    // The name to display on the UI
    UPROPERTY(EditDefaultsOnly, Category = Level)
        FText DisplayName;
    // The icon to display on the UI
    UPROPERTY(EditDefaultsOnly, Category = Level)
        TSoftObjectPtr<UTexture2D> DisplayIcon;
    // Whether the level uses world composition, will load game mode specific levels as sub levels in that case
    UPROPERTY(EditDefaultsOnly, Category = Level)
        bool bUsesWorldComposition;
    // Whether the level allows any weather conditions
    UPROPERTY(EditDefaultsOnly, Category = Level)
        bool bCanDisableTrains;
    // ~Properties
};
