#pragma once
#include "CoreMinimal.h"
#include "EUGCEraTag.generated.h"

UENUM(BlueprintType)
enum class EUGCEraTag : uint8 {
    None,
    _1800s,
    _1900s,
    _2000s,
    Futuristic,
    Ancient,
    WW2,
    WW1,
    Max,
};

