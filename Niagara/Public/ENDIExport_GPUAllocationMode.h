#pragma once
#include "CoreMinimal.h"
#include "ENDIExport_GPUAllocationMode.generated.h"

UENUM(BlueprintType)
enum class ENDIExport_GPUAllocationMode : uint8 {
    FixedSize,
    PerParticle,
    ENDIExport_MAX UMETA(Hidden),
};

