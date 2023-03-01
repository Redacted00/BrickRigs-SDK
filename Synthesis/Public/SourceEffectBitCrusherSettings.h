#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundModulationDestinationSettings -FallbackName=SoundModulationDestinationSettings
#include "SourceEffectBitCrusherSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectBitCrusherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrushedSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings SampleRateModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrushedBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings BitModulation;
    
    FSourceEffectBitCrusherSettings();
};

