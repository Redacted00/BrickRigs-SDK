#include "PhysicalMaterial.h"

UPhysicalMaterial::UPhysicalMaterial() {
    this->Friction = 0.70f;
    this->StaticFriction = 0.00f;
    this->FrictionCombineMode = EFrictionCombineMode::Average;
    this->bOverrideFrictionCombineMode = false;
    this->Restitution = 0.30f;
    this->RestitutionCombineMode = EFrictionCombineMode::Average;
    this->bOverrideRestitutionCombineMode = false;
    this->Density = 1.00f;
    this->SleepLinearVelocityThreshold = 1.00f;
    this->SleepAngularVelocityThreshold = 0.05f;
    this->SleepCounterThreshold = 4;
    this->RaiseMassToPower = 0.75f;
    this->DestructibleDamageThresholdScale = 1.00f;
    this->PhysicalMaterialProperty = NULL;
    this->SurfaceType = SurfaceType_Default;
}

