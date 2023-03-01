#include "NiagaraDataInterfaceStaticMesh.h"

UNiagaraDataInterfaceStaticMesh::UNiagaraDataInterfaceStaticMesh() {
    this->SourceMode = ENDIStaticMesh_SourceMode::Default;
    this->DefaultMesh = NULL;
    this->Source = NULL;
    this->SourceComponent = NULL;
    this->bUsePhysicsBodyVelocity = false;
}

