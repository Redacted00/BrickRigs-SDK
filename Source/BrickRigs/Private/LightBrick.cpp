#include "LightBrick.h"

ULightBrick::ULightBrick() {
    this->Brightness = 0.50f;
    this->FlashSequence = NULL;
    this->LightDirection = ELightBrickDirection::None;
    this->LightConeAngle = 45.00f;
}

