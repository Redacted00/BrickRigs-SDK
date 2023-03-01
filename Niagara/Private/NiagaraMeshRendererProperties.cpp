#include "NiagaraMeshRendererProperties.h"

UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties() {
    this->Meshes.AddDefaulted(1);
    this->SourceMode = ENiagaraRendererSourceDataMode::Particles;
    this->SortMode = ENiagaraSortMode::None;
    this->bOverrideMaterials = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bGpuLowLatencyTranslucency = true;
    this->bSubImageBlend = false;
    this->bEnableFrustumCulling = false;
    this->bEnableCameraDistanceCulling = false;
    this->bEnableMeshFlipbook = false;
    this->FacingMode = ENiagaraMeshFacingMode::Default;
    this->bLockedAxisEnable = false;
    this->LockedAxisSpace = ENiagaraMeshLockedAxisSpace::Simulation;
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 1000.00f;
    this->RendererVisibility = 0;
    this->ParticleMesh = NULL;
    this->PivotOffsetSpace = ENiagaraMeshPivotOffsetSpace::Mesh;
}

