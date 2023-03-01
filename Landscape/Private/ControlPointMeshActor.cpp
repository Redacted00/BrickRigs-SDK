#include "ControlPointMeshActor.h"
#include "ControlPointMeshComponent.h"

AControlPointMeshActor::AControlPointMeshActor() {
    this->ControlPointMeshComponent = CreateDefaultSubobject<UControlPointMeshComponent>(TEXT("ControlPointMeshComponent0"));
}

