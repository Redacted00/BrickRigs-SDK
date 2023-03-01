#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBakerViewMode.generated.h"

UENUM()
enum class ENiagaraBakerViewMode : int32 {
    Perspective,
    OrthoFront,
    OrthoBack,
    OrthoLeft,
    OrthoRight,
    OrthoTop,
    OrthoBottom,
    Num,
};

