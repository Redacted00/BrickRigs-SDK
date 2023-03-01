#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectDynamicProcessorFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectDynamicProcessorFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GainDb;
    
    FSubmixEffectDynamicProcessorFilterSettings();
};

