#include "LegacyBuilding.h"
#include "DestructibleInstancesComponent.h"

void ALegacyBuilding::SpawnBuildingPart(UBuildingPart* Part) {
}

void ALegacyBuilding::ConstructRoof(UBuildingPart* Part, uint8 RoofGableMesh, uint8 RoofMesh, bool bRotate) {
}

void ALegacyBuilding::ConstructIndustrialRoof(UBuildingPart* Part, uint8 RoofSlopeMesh, uint8 RoofMesh, uint8 WallMesh) {
}

void ALegacyBuilding::ConstructFlatRoof(UBuildingPart* Part, uint8 Mesh) {
}

UBuildingPart* ALegacyBuilding::ConstructBuildingPart(int32 NumX, int32 NumY, int32 Floors, const FVector Location) {
    return NULL;
}

ALegacyBuilding::ALegacyBuilding() {
    this->DestructibleInstancesComponent = CreateDefaultSubobject<UDestructibleInstancesComponent>(TEXT("DestructibleInstancesComponent"));
    this->NumWallsX = 0;
    this->NumWallsY = 0;
    this->NumFloors = 0;
}

