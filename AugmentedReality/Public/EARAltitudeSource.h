#pragma once
#include "CoreMinimal.h"
#include "EARAltitudeSource.generated.h"

UENUM(BlueprintType)
enum class EARAltitudeSource : uint8 {
    Precise,
    Coarse,
    UserDefined,
    Unknown,
};

