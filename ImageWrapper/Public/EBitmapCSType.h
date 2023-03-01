#pragma once
#include "CoreMinimal.h"
#include "EBitmapCSType.generated.h"

UENUM(BlueprintType)
enum class EBitmapCSType : uint8 {
    BCST_BLCS_CALIBRATED_RGB,
    BCST_LCS_sRGB = 0x73524742,
    BCST_LCS_WINDOWS_COLOR_SPACE = 0x57696E20,
    BCST_PROFILE_LINKED = 0x4C494E4B,
    BCST_PROFILE_EMBEDDED = 0x4D424544,
    BCST_MAX = 0x73524743,
};

