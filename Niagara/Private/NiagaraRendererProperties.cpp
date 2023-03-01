#include "NiagaraRendererProperties.h"

UNiagaraRendererProperties::UNiagaraRendererProperties() {
    this->SortOrderHint = 0;
    this->MotionVectorSetting = ENiagaraRendererMotionVectorSetting::AutoDetect;
    this->bIsEnabled = true;
    this->bMotionBlurEnabled = true;
}

