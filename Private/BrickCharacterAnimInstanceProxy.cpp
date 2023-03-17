#include "BrickCharacterAnimInstanceProxy.h"

FBrickCharacterAnimInstanceProxy::FBrickCharacterAnimInstanceProxy() {
    this->AimRatio = 0.00f;
    this->CameraDepthOffset = 0.00f;
    this->ArmsViewRotationAlpha = 0.00f;
    this->ItemBlendRatio = 0.00f;
    this->WeaponSupportRatio = 0.00f;
    this->ItemSprintRatio = 0.00f;
    this->bIsWeaponBlocked = false;
    this->bIsCarryingBrick = false;
    this->bIsInVehicle = false;
    this->VehicleIdleSequence = NULL;
    this->VehicleAnimInstance = NULL;
    this->HandsIKAlpha = 0.00f;
    this->ItemIdleSequence = NULL;
    this->ItemSprintSequence = NULL;
}

