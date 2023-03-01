#pragma once
#include "CoreMinimal.h"
#include "ECameraFocusMethod.generated.h"

UENUM(BlueprintType)
enum class ECameraFocusMethod : uint8 {
    DoNotOverride,
    Manual,
    Tracking,
    Disable,
    MAX,
};

