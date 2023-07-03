#include "FlamethrowerBrickStaticInfo.h"

UFlamethrowerBrickStaticInfo::UFlamethrowerBrickStaticInfo() {
    this->FireEmitter = NULL;
    this->FireSound = NULL;
    this->FlameLength = 500.00f;
    this->FlameRadius = 50.00f;
    this->FlameDamage = 0.25f;
    this->DamageInterval = 0.25f;
}

