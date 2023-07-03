#pragma once
#include "CoreMinimal.h"
#include "EBrickUIBrushStyle.generated.h"

UENUM(BlueprintType)
enum class EBrickUIBrushStyle : uint8 {
    Default,
    Button,
    FolderButton,
    MapButton,
    BorderlessButton,
    KeyBorder,
    Slider,
    Spacer,
    Custom,
    Max,
};

