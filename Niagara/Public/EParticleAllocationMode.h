#pragma once
#include "CoreMinimal.h"
#include "EParticleAllocationMode.generated.h"

UENUM(BlueprintType)
enum class EParticleAllocationMode : uint8 {
    AutomaticEstimate,
    ManualEstimate,
};

