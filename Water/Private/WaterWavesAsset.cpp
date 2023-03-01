#include "WaterWavesAsset.h"
#include "GerstnerWaterWaves.h"

UWaterWavesAsset::UWaterWavesAsset() {
    this->WaterWaves = CreateDefaultSubobject<UGerstnerWaterWaves>(TEXT("WaterWaves"));
}

