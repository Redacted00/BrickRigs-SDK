#include "BrickMaterial.h"

UBrickMaterial::UBrickMaterial() {
    this->PriceFactor = 1.00f;
    this->MaterialOverride = NULL;
    this->bIsTranslucentMaterial = false;
    this->bHasDiffuseMap = false;
}

