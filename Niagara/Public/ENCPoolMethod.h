#pragma once
#include "CoreMinimal.h"
#include "ENCPoolMethod.generated.h"

UENUM(BlueprintType)
enum class ENCPoolMethod : uint8 {
    None,
    AutoRelease,
    ManualRelease,
    ManualRelease_OnComplete,
    FreeInPool,
};

