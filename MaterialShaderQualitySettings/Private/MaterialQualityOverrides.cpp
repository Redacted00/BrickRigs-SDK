#include "MaterialQualityOverrides.h"

FMaterialQualityOverrides::FMaterialQualityOverrides() {
    this->bDiscardQualityDuringCook = false;
    this->bEnableOverride = false;
    this->bForceFullyRough = false;
    this->bForceNonMetal = false;
    this->bForceDisableLMDirectionality = false;
    this->bForceLQReflections = false;
    this->bForceDisablePreintegratedGF = false;
    this->bDisableMaterialNormalCalculation = false;
    this->MobileShadowQuality = EMobileShadowQuality::NoFiltering;
}

