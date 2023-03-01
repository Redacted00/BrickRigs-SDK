#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataSetType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraDataSetType : uint8 {
    ParticleData,
    Shared,
    Event,
};

