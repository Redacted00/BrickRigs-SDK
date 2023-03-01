#include "TurbineBrickStaticInfo.h"

UTurbineBrickStaticInfo::UTurbineBrickStaticInfo() {
    this->MaxRPM = 500.00f;
    this->Acceleration = 2.00f;
    this->MaxVerticalSpeed = 1200.00f;
    this->VerticalAcceleration = 600.00f;
    this->ThrottleInputInterpRate = 0.50f;
    this->TurbineSoundCue = NULL;
    this->MaxBankAngle = 30.00f;
    this->AutoHoverMaxBankAngleSpeed = 600.00f;
}

