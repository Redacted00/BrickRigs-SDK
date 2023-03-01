#pragma once
#include "CoreMinimal.h"
#include "EInitialWaveOscillatorOffsetType.h"
#include "WaveOscillator.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FWaveOscillator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialWaveOscillatorOffsetType InitialOffsetType;
    
    FWaveOscillator();
};

