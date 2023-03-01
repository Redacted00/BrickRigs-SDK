#include "MotorBrickStaticInfo.h"

UMotorBrickStaticInfo::UMotorBrickStaticInfo() {
    this->MotorSoundCue = NULL;
    this->StartupSound = NULL;
    this->BrakeReleaseSound = NULL;
    this->BackFireSound = NULL;
    this->StartupTime = 0.00f;
    this->Acceleration = 2.00f;
    this->BackfireRPM = 0.85f;
    this->ShiftDelay = 0.00f;
    this->MinAutoShiftDelay = 2.00f;
    this->NumForwardGears = 0;
    this->NumReverseGears = 0;
    this->LastGearSpeed = 0.00f;
}

