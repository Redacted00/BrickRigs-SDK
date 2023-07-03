#include "WorldBounds.h"
#include "Components/InstancedStaticMeshComponent.h"

AWorldBounds::AWorldBounds() {
    this->BoundsMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("BoundsMeshComponent"));
    this->WaterMeshComponent = NULL;
    this->StaticMesh = NULL;
    this->WaterMesh = NULL;
    this->MaterialOverride = NULL;
    this->WaterMaterialOverride = NULL;
    this->WaterDepth = 0.00f;
}

