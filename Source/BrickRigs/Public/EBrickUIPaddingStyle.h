#pragma once
#include "CoreMinimal.h"
#include "EBrickUIPaddingStyle.generated.h"

UENUM(BlueprintType)
enum class EBrickUIPaddingStyle : uint8 {
    Border,
    Button,
    FolderButton,
    MapButton,
    BorderlessButton,
    KeyBorder,
    Slider,
    Custom,
    Max,
};

