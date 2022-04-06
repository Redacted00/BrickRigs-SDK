// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeatherCondition.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EPrecipitationType : uint8
{
    None,
    Rain,
    Snow,
    Max UMETA(Hidden)
};

UCLASS()
class BRICKRIGS_API UWeatherCondition : public UObject
{
	GENERATED_BODY()
	
        UPROPERTY(EditAnywhere)
        FText DisplayName;
    UPROPERTY(EditAnywhere)
        TSoftObjectPtr<USoundBase> AmbientSound;
    UPROPERTY(EditAnywhere)
        float Temperature;
    UPROPERTY(EditAnywhere)
        float WindSpeed;
    // The maximum relative variance in speed
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float WindSpeedVariance;
    // Direction the wind is blowing in in degrees from north
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 360.f))
        float WindDirection;
    // The maximum deviation from the wind direction
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 180.f))
        float WindDirectionVariance;
    // How often the wind direction and speed is changed, 1 means every second
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float WindPeriod;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float CloudDensity;
    // Height of the clouds above the ground
    UPROPERTY(EditAnywhere)
        float CloudHeight;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float MaxFogOpacity;
    UPROPERTY(EditAnywhere)
        EPrecipitationType PrecipitationType;
    // How intensely it is ranining, snowing etc.
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float PrecipitationIntensity;
    // How much of the ground is covered in snow
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float SnowCoverage;
    // How much of the ground is covered in rain
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float RainCoverage;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float LightningFrequency;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float MinLightningDelay;
};
