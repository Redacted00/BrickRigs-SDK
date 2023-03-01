#include "CameraBrickStaticInfo.h"

UCameraBrickStaticInfo::UCameraBrickStaticInfo() {
    this->bViewRotationInWorldSpace = false;
    this->bRotateViewWhenInteracting = true;
    this->NotConnectedPostProcessMaterial = NULL;
    this->MaxTargetRange = 500000.00f;
}

