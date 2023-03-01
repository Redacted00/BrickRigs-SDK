#include "WorldBounds.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent

AWorldBounds::AWorldBounds() {
    this->BoundsMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("BoundsMeshComponent"));
    this->WaterMeshComponent = NULL;
    this->StaticMesh = NULL;
    this->WaterMesh = NULL;
    this->MaterialOverride = NULL;
    this->WaterMaterialOverride = NULL;
    this->WaterDepth = 0.00f;
}

