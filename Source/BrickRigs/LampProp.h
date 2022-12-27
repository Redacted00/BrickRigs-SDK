// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StaticMeshProp.h"
#include "LampProp.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class BRICKRIGS_API ALampProp : public AStaticMeshProp
{
    GENERATED_BODY()

private:
    // ~Variables
    UPROPERTY(EditAnywhere)
        FFloatInterval PowerTimeRange;
};
