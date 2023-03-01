#pragma once
#include "CoreMinimal.h"
#include "ERadialImpulseFalloff.generated.h"

UENUM(BlueprintType)
enum ERadialImpulseFalloff {
    RIF_Constant,
    RIF_Linear,
    RIF_MAX UMETA(Hidden),
};

