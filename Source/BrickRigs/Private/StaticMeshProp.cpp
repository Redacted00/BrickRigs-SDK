#include "StaticMeshProp.h"
#include "Components/StaticMeshComponent.h"

AStaticMeshProp::AStaticMeshProp() {
    this->SelectedMaterial = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMesh = NULL;
    this->MaxDrawDistance = 50000.00f;
    this->bIsClimbable = true;
}

