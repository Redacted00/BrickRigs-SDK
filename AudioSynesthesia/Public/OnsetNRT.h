#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRT.h"
#include "OnsetNRT.generated.h"

class UOnsetNRTSettings;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UOnsetNRT : public UAudioSynesthesiaNRT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnsetNRTSettings* Settings;
    
    UOnsetNRT();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const;
    
};

