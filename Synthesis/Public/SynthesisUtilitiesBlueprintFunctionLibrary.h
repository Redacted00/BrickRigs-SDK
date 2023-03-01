#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SynthesisUtilitiesBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SYNTHESIS_API USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USynthesisUtilitiesBlueprintFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
    
    UFUNCTION(BlueprintCallable)
    static float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
    
};

