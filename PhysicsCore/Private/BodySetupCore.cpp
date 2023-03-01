#include "BodySetupCore.h"

UBodySetupCore::UBodySetupCore() {
    this->PhysicsType = PhysType_Default;
    this->CollisionTraceFlag = CTF_UseDefault;
    this->CollisionReponse = EBodyCollisionResponse::BodyCollision_Enabled;
}

