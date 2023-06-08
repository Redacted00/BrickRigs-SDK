#include "ExplosiveMaterial.h"

UExplosiveMaterial::UExplosiveMaterial() {
    this->Price = 1.00f;
    this->ImpactResistance = 1.00f;
    this->DamageResistance = 0.10f;
    this->VolumeIncrease = 2.00f;
    this->DamageScale = 0.75f;
    this->IgnitionRatio = 0.00f;
    this->bIsFuel = false;
    this->ExplosionEmitter = NULL;
    this->ExplosionSound = NULL;
}

