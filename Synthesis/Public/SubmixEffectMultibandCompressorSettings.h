#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsPeakMode -FallbackName=ESubmixEffectDynamicsPeakMode
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsProcessorType -FallbackName=ESubmixEffectDynamicsProcessorType
#include "DynamicsBandSettings.h"
#include "SubmixEffectMultibandCompressorSettings.generated.h"

USTRUCT(BlueprintType)
struct FSubmixEffectMultibandCompressorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLinkChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnalogMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFourPole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicsBandSettings> Bands;
    
    SYNTHESIS_API FSubmixEffectMultibandCompressorSettings();
};

