#include "BrickBuildingDebris.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent

ABrickBuildingDebris::ABrickBuildingDebris() {
    this->DebrisMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("DebrisISM"));
    this->CollapsePSC = NULL;
    this->CollapseAC = NULL;
    this->DebrisMesh = NULL;
    this->DebrisSpacing = 1200.00f;
    this->DebrisRotationJitter = 5.00f;
    this->CollapseSound = NULL;
    this->CollapseEmitter = NULL;
}

