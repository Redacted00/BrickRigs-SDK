#include "FoliageType_InstancedStaticMesh.h"
#include "FoliageInstancedStaticMeshComponent.h"

UFoliageType_InstancedStaticMesh::UFoliageType_InstancedStaticMesh() {
    this->Mesh = NULL;
    this->ComponentClass = UFoliageInstancedStaticMeshComponent::StaticClass();
}

