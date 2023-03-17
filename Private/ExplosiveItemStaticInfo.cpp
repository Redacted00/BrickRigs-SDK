#include "ExplosiveItemStaticInfo.h"

UExplosiveItemStaticInfo::UExplosiveItemStaticInfo() {
    this->ExplosiveMaterial = NULL;
    this->ExplosiveVolume = 0.50f;
    this->MinExplosionDamage = 0.10f;
    this->bCanBeDefused = false;
}

