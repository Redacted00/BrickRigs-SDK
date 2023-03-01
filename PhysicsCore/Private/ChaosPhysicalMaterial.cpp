#include "ChaosPhysicalMaterial.h"

UChaosPhysicalMaterial::UChaosPhysicalMaterial() {
    this->Friction = 0.50f;
    this->StaticFriction = 0.00f;
    this->Restitution = 0.10f;
    this->LinearEtherDrag = 0.00f;
    this->AngularEtherDrag = 0.00f;
    this->SleepingLinearVelocityThreshold = 1.00f;
    this->SleepingAngularVelocityThreshold = 1.00f;
}

