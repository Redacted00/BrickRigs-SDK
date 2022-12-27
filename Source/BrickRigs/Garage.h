// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickBuilding.h"
#include "Garage.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class BRICKRIGS_API AGarage : public ABrickBuilding
{
    GENERATED_BODY()

        UPROPERTY(EditDefaultsOnly)
        USceneComponent* PlayerSpawnPoint;
    AGarage();
};