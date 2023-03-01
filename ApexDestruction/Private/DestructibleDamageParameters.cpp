#include "DestructibleDamageParameters.h"

FDestructibleDamageParameters::FDestructibleDamageParameters() {
    this->DamageThreshold = 0.00f;
    this->DamageSpread = 0.00f;
    this->bEnableImpactDamage = false;
    this->ImpactDamage = 0.00f;
    this->DefaultImpactDamageDepth = 0;
    this->bCustomImpactResistance = false;
    this->ImpactResistance = 0.00f;
}

