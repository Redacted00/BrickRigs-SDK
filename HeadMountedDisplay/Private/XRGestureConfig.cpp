#include "XRGestureConfig.h"

FXRGestureConfig::FXRGestureConfig() {
    this->bTap = false;
    this->bHold = false;
    this->AxisGesture = ESpatialInputGestureAxis::None;
    this->bNavigationAxisX = false;
    this->bNavigationAxisY = false;
    this->bNavigationAxisZ = false;
}

