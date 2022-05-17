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
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USoundBase> AmbientSound;

	UPROPERTY(EditAnywhere)
	float Temperature;
	UPROPERTY(EditAnywhere)
	float WindSpeed;
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
	float CloudDensity;
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
	float MaxFogOpacity;
	UPROPERTY(EditAnywhere)
	EPrecipitationType PrecipitationType;
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f, ClampMax = 1.f))
	float RainCoverage;
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.f))
	float LightningFrequency;
};
