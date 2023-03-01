#include "BrickVehicleStaticInfo.h"

UBrickVehicleStaticInfo::UBrickVehicleStaticInfo() {
    this->MinCollisionImpulseSize = 20000.00f;
    this->CollisionImpulseDamageScale = 0.00f;
    this->MaxCollisionEffectSpawnDist = 20000.00f;
    this->MinCollisionSoundImpulseSize = 1000.00f;
    this->MinCollisionSpeed = 50.00f;
    this->MinCollisionSoundDelay = 0.25f;
    this->CollisionSound = NULL;
    this->FireEmitter = NULL;
    this->FireSound = NULL;
    this->FireSpreadProbability = 0.10f;
    this->FireSpreadDistance = 60.00f;
    this->MinZoomVehicleBoundsRadius = 200.00f;
    this->DefaultZoomRatio = 0.50f;
    this->ViewRotationInterpSpeed = 8.00f;
    this->IconOffsetZ = 100.00f;
    this->MaxFriendlyIconDrawDist = 20000.00f;
    this->MaxHostileIconDrawDist = 200.00f;
}

