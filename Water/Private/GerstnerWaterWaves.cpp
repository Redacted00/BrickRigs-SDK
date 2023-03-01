#include "GerstnerWaterWaves.h"
#include "GerstnerWaterWaveGeneratorSimple.h"

UGerstnerWaterWaves::UGerstnerWaterWaves() {
    this->GerstnerWaveGenerator = CreateDefaultSubobject<UGerstnerWaterWaveGeneratorSimple>(TEXT("WaterWaves"));
    this->MaxWaveHeight = 0.00f;
}

