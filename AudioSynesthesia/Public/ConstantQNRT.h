#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRT.h"
#include "ConstantQNRT.generated.h"

class UConstantQNRTSettings;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UConstantQNRT : public UAudioSynesthesiaNRT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstantQNRTSettings* Settings;
    
    UConstantQNRT();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ) const;
    
};

