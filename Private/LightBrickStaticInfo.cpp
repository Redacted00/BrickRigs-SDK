#include "LightBrickStaticInfo.h"

ULightBrickStaticInfo::ULightBrickStaticInfo() {
    this->Intensity = 5.00f;
    this->MaxBrightness = 0.00f;
    this->LightDirectionFlags = 65535;
    this->DefaultLightDirection = ELightBrickDirection::Z;
    this->DefaultLightConeAngle = 45.00f;
}

