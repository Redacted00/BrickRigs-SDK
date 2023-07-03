#pragma once
#include "CoreMinimal.h"
#include "BrickDuration.h"
#include "BrickStructPropertyInterface.h"
#include "WorldSetupParams.generated.h"

class UWeatherCondition;

USTRUCT(BlueprintType)
struct FWorldSetupParams : public FBrickStructPropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickDuration DayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AtmosphereDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeatherCondition* Weather;
    
    BRICKRIGS_API FWorldSetupParams();
};

