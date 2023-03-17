#pragma once
#include "CoreMinimal.h"
#include "EUGCTaskPopupType.generated.h"

UENUM(BlueprintType)
enum class EUGCTaskPopupType : uint8 {
    None,
    Download,
    Upload,
};

