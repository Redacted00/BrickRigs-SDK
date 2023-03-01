#include "BodyInstanceCore.h"

FBodyInstanceCore::FBodyInstanceCore() {
    this->bSimulatePhysics = false;
    this->bOverrideMass = false;
    this->bEnableGravity = false;
    this->bAutoWeld = false;
    this->bStartAwake = false;
    this->bGenerateWakeEvents = false;
    this->bUpdateMassWhenScaleChanges = false;
}

