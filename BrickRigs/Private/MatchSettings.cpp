#include "MatchSettings.h"

FMatchSettings::FMatchSettings() {
    this->NumPlayerSlots = 0;
    this->Level = NULL;
    this->GameMode = NULL;
    this->bEnableAITrains = false;
    this->bFadeIn = false;
    this->bAllowInvincibility = false;
    this->bAllowTeleporting = false;
    this->bAllowWeapons = false;
    this->bAllowExplosions = false;
    this->bAllowBuildingDamage = false;
    this->bOnlyAdminsCanSpawnVehicles = false;
    this->MaxDummies = 0;
    this->MaxBricksPerVehicle = 0;
    this->MaxVehiclesPerPlayer = 0;
}

