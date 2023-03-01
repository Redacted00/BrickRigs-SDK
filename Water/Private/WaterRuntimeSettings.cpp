#include "WaterRuntimeSettings.h"

UWaterRuntimeSettings::UWaterRuntimeSettings() {
    this->CollisionChannelForWaterTraces = ECC_GameTraceChannel10;
    this->WaterBodyIconWorldSize = 1000.00f;
    this->WaterBodyIconWorldZOffset = 250.00f;
    this->DefaultWaterCollisionProfileName = TEXT("WaterBodyCollision");
}

