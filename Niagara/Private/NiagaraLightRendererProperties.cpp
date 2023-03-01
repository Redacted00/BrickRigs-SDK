#include "NiagaraLightRendererProperties.h"

UNiagaraLightRendererProperties::UNiagaraLightRendererProperties() {
    this->bUseInverseSquaredFalloff = true;
    this->bAffectsTranslucency = false;
    this->bAlphaScalesBrightness = false;
    this->RadiusScale = 1.00f;
    this->DefaultExponent = 1.00f;
    this->RendererVisibility = 0;
}

