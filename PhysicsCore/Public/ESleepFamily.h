#pragma once
#include "CoreMinimal.h"
#include "ESleepFamily.generated.h"

UENUM(BlueprintType)
enum class ESleepFamily : uint8 {
    Normal,
    Sensitive,
    Custom,
};

