#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectConvolutionReverbBlockSize.generated.h"

UENUM(BlueprintType)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8 {
    BlockSize256,
    BlockSize512,
    BlockSize1024,
};

