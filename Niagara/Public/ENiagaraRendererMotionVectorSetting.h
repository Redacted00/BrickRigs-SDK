#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRendererMotionVectorSetting.generated.h"

UENUM()
enum class ENiagaraRendererMotionVectorSetting : int32 {
    AutoDetect,
    Precise,
    Approximate,
    Disable,
};

