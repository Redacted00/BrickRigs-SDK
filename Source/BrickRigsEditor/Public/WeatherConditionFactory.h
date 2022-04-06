// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "BrickFactory.h"
#include "BrickRigs/WeatherCondition.h"

#include "WeatherConditionFactory.generated.h"


/**
 * 
 */
UCLASS()
class BRICKRIGSEDITOR_API UWeatherConditionFactory : public UBrickFactory
{
	GENERATED_BODY()

public:
    // ~Constructor
    UWeatherConditionFactory()
    {
        SupportedClass = UWeatherCondition::StaticClass();
    }
	
};
