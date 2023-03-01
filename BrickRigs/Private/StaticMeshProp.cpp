#include "StaticMeshProp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AStaticMeshProp::AStaticMeshProp() {
    this->SelectedMaterial = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMesh = NULL;
    this->MaxDrawDistance = 50000.00f;
    this->bIsClimbable = true;
}

