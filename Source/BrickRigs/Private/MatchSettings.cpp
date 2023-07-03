#include "MatchSettings.h"

FMatchSettings::FMatchSettings() {
    this->NumPlayerSlots = 0;
    this->Level = NULL;
    this->GameMode = NULL;
    this->bAutoBalanceTeams = false;
    this->bEnableAITrains = false;
    this->bFadeIn = false;
    this->bExemptAdminsFromRestrictions = false;
    this->bAllowInvincibility = false;
    this->bAllowSpawnAnywhere = false;
    this->bAllowWeapons = false;
    this->bAllowExplosions = false;
    this->bAllowBuildingDamage = false;
    this->bAllowEnterVehicleWithoutSeat = false;
    this->bAllowRemoveVehicleFromOtherPlayer = false;
    this->bAllowFreeCam = false;
    this->bAllowInfiniteAmmo = false;
    this->bAllowInfiniteFuel = false;
    this->MaxDummies = 0;
    this->bEnableVehicleWhitelist = false;
    this->MaxBricksPerVehicle = 0;
    this->MaxVehicleMass = 0.00f;
    this->MaxVehicleSize = 0.00f;
    this->MaxVehiclesPerPlayer = 0;
    this->VehiclePriceFactor = 0.00f;
}

