#include "FirearmProperties.h"

FFirearmProperties::FFirearmProperties() {
    this->AmmoCapacity = 0;
    this->DefaultAmmoType = EAmmoType::Default;
    this->ProjectileClass = NULL;
    this->SpreadRadius = 0.00f;
    this->BoltCycleTime = 0.00f;
    this->bHasSemiMode = false;
    this->bHasAutoMode = false;
    this->BurstRounds = 0;
}

