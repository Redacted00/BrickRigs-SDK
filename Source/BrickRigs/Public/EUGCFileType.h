#pragma once
#include "CoreMinimal.h"
#include "EUGCFileType.generated.h"

UENUM(BlueprintType)
enum class EUGCFileType : uint8 {
    None,
    Saved,
    SavedDevelopment,
    SavedLegacy,
    Online,
    Inline,
    Max,
};

