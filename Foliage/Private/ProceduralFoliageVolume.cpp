#include "ProceduralFoliageVolume.h"
#include "ProceduralFoliageComponent.h"

AProceduralFoliageVolume::AProceduralFoliageVolume() {
    this->ProceduralComponent = CreateDefaultSubobject<UProceduralFoliageComponent>(TEXT("ProceduralFoliageComponent"));
}

