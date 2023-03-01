#include "WaterMeshComponent.h"

bool UWaterMeshComponent::IsEnabled() const {
    return false;
}

UWaterMeshComponent::UWaterMeshComponent() {
    this->ForceCollapseDensityLevel = -1;
    this->TileSize = 2400.00f;
    this->FarDistanceMaterial = NULL;
    this->FarDistanceMeshExtent = 0.00f;
    this->TessellationFactor = 6;
    this->LODScale = 1.00f;
}

