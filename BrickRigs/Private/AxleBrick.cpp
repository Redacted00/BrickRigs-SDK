#include "AxleBrick.h"

UAxleBrick::UAxleBrick() {
    this->SuspensionLength = 0.00f;
    this->SuspensionStiffness = 2.00f;
    this->SuspensionDamping = 1.00f;
    this->bDriven = true;
    this->bInvertDrive = false;
    this->bHasBrake = true;
    this->bHasHandBrake = true;
    this->BrakeStrength = 1.00f;
    this->SteeringAngle = 0.00f;
    this->SteeringSpeed = 1.00f;
    this->bCanDisableSteering = false;
    this->bCanInvertSteering = false;
}

