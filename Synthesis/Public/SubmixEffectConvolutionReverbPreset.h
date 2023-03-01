#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "ESubmixEffectConvolutionReverbBlockSize.h"
#include "SubmixEffectConvolutionReverbSettings.h"
#include "SubmixEffectConvolutionReverbPreset.generated.h"

class UAudioImpulseResponse;

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioImpulseResponse* ImpulseResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectConvolutionReverbSettings Settings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectConvolutionReverbBlockSize BlockSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHardwareAcceleration;
    
    USubmixEffectConvolutionReverbPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);
    
};

