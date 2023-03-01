#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDefaultRendererMotionVectorSetting.generated.h"

UENUM()
enum class ENiagaraDefaultRendererMotionVectorSetting : int32 {
    Precise,
    Approximate,
};

