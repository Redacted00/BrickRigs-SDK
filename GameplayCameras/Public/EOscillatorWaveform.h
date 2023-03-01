#pragma once
#include "CoreMinimal.h"
#include "EOscillatorWaveform.generated.h"

UENUM(BlueprintType)
enum class EOscillatorWaveform : uint8 {
    SineWave,
    PerlinNoise,
};

