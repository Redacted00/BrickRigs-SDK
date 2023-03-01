#include "BrickStaticInfo.h"

UBrickStaticInfo::UBrickStaticInfo() {
    this->LiftSurfaceRadius = 0.00f;
    this->StaticMesh = NULL;
    this->MaxConnectorDist = 0.00f;
    this->MassScale = 0.25f;
    this->DisplayMassScale = 1.00f;
    this->PhysicalMaterialOverride = NULL;
    this->bGenerateFluidDynamicSurface = true;
    this->Volume = 0.00f;
}

