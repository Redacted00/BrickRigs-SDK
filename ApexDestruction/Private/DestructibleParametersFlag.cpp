#include "DestructibleParametersFlag.h"

FDestructibleParametersFlag::FDestructibleParametersFlag() {
    this->bAccumulateDamage = false;
    this->bAssetDefinedSupport = false;
    this->bWorldSupport = false;
    this->bDebrisTimeout = false;
    this->bDebrisMaxSeparation = false;
    this->bCrumbleSmallestChunks = false;
    this->bAccurateRaycasts = false;
    this->bUseValidBounds = false;
    this->bFormExtendedStructures = false;
}

