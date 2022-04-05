// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickFactory.h"
#include <BrickRigs/LevelInfo.h>
#include "LevelInfoFactory.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGSEDITOR_API ULevelInfoFactory : public UBrickFactory
{
    GENERATED_BODY()

public:
    // ~Constructor
    ULevelInfoFactory()
    {
        SupportedClass = ULevelInfo::StaticClass();
    }
};
