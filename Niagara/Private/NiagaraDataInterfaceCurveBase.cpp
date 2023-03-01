#include "NiagaraDataInterfaceCurveBase.h"

UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase() {
    this->LUTMinTime = 0.00f;
    this->LUTMaxTime = 1.00f;
    this->LUTInvTimeRange = 1.00f;
    this->LUTNumSamplesMinusOne = 0.00f;
    this->bUseLUT = true;
    this->bExposeCurve = false;
    this->ExposedName = TEXT("Curve");
    this->ExposedTexture = NULL;
}

