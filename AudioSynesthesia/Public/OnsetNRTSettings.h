#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRTSettings.h"
#include "OnsetNRTSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownmixToMono;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GranularityInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumFrequency;
    
    UOnsetNRTSettings();
};

