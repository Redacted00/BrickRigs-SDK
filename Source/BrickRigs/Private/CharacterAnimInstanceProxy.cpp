#include "CharacterAnimInstanceProxy.h"

FCharacterAnimInstanceProxy::FCharacterAnimInstanceProxy() {
    this->bIsViewTarget = false;
    this->bIsConscious = false;
    this->MovementDirection = 0.00f;
    this->Speed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->WalkSpeedRatio = 0.00f;
    this->CrouchSpeedRatio = 0.00f;
    this->SprintRatio = 0.00f;
    this->bIsMoving = false;
    this->bIsSprinting = false;
    this->bIsCrouched = false;
    this->BodyRotationOffset = 0.00f;
    this->bIsBodyRotating = false;
    this->bIsMovingOrRotating = false;
    this->bIsWalking = false;
    this->bIsFalling = false;
    this->bIsSwimming = false;
}

