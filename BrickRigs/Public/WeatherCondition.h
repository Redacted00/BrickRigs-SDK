#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DisplayInfo.h"
#include "ObjectPropertyItemInterface.h"
#include "WeatherConditionParams.h"
#include "WeatherCondition.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UWeatherCondition : public UObject, public IObjectPropertyItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayInfo DisplayInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherConditionParams Weather;
    
    UWeatherCondition();
    
    // Fix for true pure virtual functions not being implemented
};

