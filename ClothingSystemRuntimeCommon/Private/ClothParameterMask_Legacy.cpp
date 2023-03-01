#include "ClothParameterMask_Legacy.h"

FClothParameterMask_Legacy::FClothParameterMask_Legacy() {
    this->CurrentTarget = EWeightMapTargetCommon::None;
    this->MaxValue = 0.00f;
    this->MinValue = 0.00f;
    this->bEnabled = false;
}

