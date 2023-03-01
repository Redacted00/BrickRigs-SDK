#include "ClothConfig_Legacy.h"

FClothConfig_Legacy::FClothConfig_Legacy() {
    this->WindMethod = EClothingWindMethod_Legacy::Legacy;
    this->SelfCollisionRadius = 0.00f;
    this->SelfCollisionStiffness = 0.00f;
    this->SelfCollisionCullScale = 0.00f;
    this->Friction = 0.00f;
    this->WindDragCoefficient = 0.00f;
    this->WindLiftCoefficient = 0.00f;
    this->SolverFrequency = 0.00f;
    this->StiffnessFrequency = 0.00f;
    this->GravityScale = 0.00f;
    this->bUseGravityOverride = false;
    this->TetherStiffness = 0.00f;
    this->TetherLimit = 0.00f;
    this->CollisionThickness = 0.00f;
    this->AnimDriveSpringStiffness = 0.00f;
    this->AnimDriveDamperStiffness = 0.00f;
}

