#include "NavSystemConfigOverride.h"

ANavSystemConfigOverride::ANavSystemConfigOverride() {
    this->NavigationSystemConfig = NULL;
    this->OverridePolicy = ENavSystemOverridePolicy::Override;
    this->bLoadOnClient = false;
}

