// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickBuilding.h"
#include "Garage.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AGarage : public ABrickBuilding
{
    GENERATED_BODY()
public:
        UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
        USceneComponent* PlayerSpawnPoint;
    AGarage();
};