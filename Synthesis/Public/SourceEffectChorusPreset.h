#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectChorusBaseSettings.h"
#include "SourceEffectChorusSettings.h"
#include "SourceEffectChorusPreset.generated.h"

class USoundModulatorBase;

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectChorusPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectChorusSettings Settings;
    
    USourceEffectChorusPreset();
    UFUNCTION(BlueprintCallable)
    void SetWetModulator(const USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable)
    void SetWet(float WetAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetSpreadModulator(const USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable)
    void SetSpread(float Spread);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectChorusBaseSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetModulationSettings(const FSourceEffectChorusSettings& ModulationSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetFrequencyModulator(const USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable)
    void SetFrequency(float Frequency);
    
    UFUNCTION(BlueprintCallable)
    void SetFeedbackModulator(const USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable)
    void SetFeedback(float Feedback);
    
    UFUNCTION(BlueprintCallable)
    void SetDryModulator(const USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable)
    void SetDry(float DryAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthModulator(const USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable)
    void SetDepth(float Depth);
    
};

