#include "XRMotionControllerData.h"

FXRMotionControllerData::FXRMotionControllerData() {
    this->bValid = false;
    this->DeviceVisualType = EXRVisualType::Controller;
    this->HandIndex = EControllerHand::Left;
    this->TrackingStatus = ETrackingStatus::NotTracked;
    this->bIsGrasped = false;
}

