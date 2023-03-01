#pragma once
#include "CoreMinimal.h"
#include "EUGCBrowserMode.generated.h"

UENUM(BlueprintType)
enum class EUGCBrowserMode : uint8 {
    None,
    Spawn,
    Open,
    Import,
    Save,
    Upload,
    Property,
    ArrayProperty,
};

