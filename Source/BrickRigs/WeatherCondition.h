// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeatherCondition.generated.h"

/**
 * 
 * 
 * 
 * 
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


USTRUCT(BlueprintType)
struct FDisplayInfo
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FText Name;
};

USTRUCT(BlueprintType)
struct FWeatherConditionParams
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere)
        TSoftObjectPtr<USoundBase> AmbientSound;
    UPROPERTY(EditAnywhere)
        float Temperature = 20.f;
    UPROPERTY(EditAnywhere)
        float WindSpeed;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float WindSpeedVariance = 0.75f;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 180.f))
        float WindDirectionVariance = 20.f;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float WindPeriod = 5.f;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float CloudDensity;
    UPROPERTY(EditAnywhere)
        float CloudHeight = 100000.f;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float MaxFogOpacity;
    UPROPERTY(EditAnywhere)
        EPrecipitationType PrecipitationType;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float PrecipitationIntensity = 1.f;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float SnowCoverage;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
        float RainCoverage;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float LightningFrequency;
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
        float MinLightningDelay = 1.5f;
};


UCLASS()
class BRICKRIGS_API UWeatherCondition : public UObject
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere)
        FDisplayInfo DisplayInfo;
    UPROPERTY(EditAnywhere)
        FWeatherConditionParams Weather;
};