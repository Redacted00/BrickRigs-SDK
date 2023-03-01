#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectMultibandCompressorSettings.h"
#include "SubmixEffectMultibandCompressorPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectMultibandCompressorSettings Settings;
    
    USubmixEffectMultibandCompressorPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectMultibandCompressorSettings& InSettings);
    
};

