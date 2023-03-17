#include "ThrusterBrickStaticInfo.h"

UThrusterBrickStaticInfo::UThrusterBrickStaticInfo() {
    this->Thrust = 0.00f;
    this->ThrottleInputRate = 1.00f;
    this->NozzleSocketName = TEXT("nozzle_socket");
    this->ParticleEmitter = NULL;
    this->ThrusterSound = NULL;
}

