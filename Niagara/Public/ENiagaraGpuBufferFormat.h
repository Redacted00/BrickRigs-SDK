#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuBufferFormat.generated.h"

UENUM(BlueprintType)
enum class ENiagaraGpuBufferFormat : uint8 {
    Float,
    HalfFloat,
    UnsignedNormalizedByte,
    Max,
};

