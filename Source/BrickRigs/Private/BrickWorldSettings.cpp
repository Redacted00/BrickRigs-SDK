#include "BrickWorldSettings.h"
#include "ProjectileManagerComponent.h"

ABrickWorldSettings* ABrickWorldSettings::GetWorldSettings(UObject* WorldContextObject) {
    return NULL;
}

ABrickWorldSettings::ABrickWorldSettings() {
    this->WorldSetupActor = NULL;
    this->DefaultWaterPhysicsVolume = NULL;
    this->ProjectileManager = CreateDefaultSubobject<UProjectileManagerComponent>(TEXT("ProjectileManager"));
    this->SeaLevel = 0.00f;
}

