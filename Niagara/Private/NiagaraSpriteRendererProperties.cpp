#include "NiagaraSpriteRendererProperties.h"

UNiagaraSpriteRendererProperties::UNiagaraSpriteRendererProperties() {
    this->Material = NULL;
    this->SourceMode = ENiagaraRendererSourceDataMode::Particles;
    this->Alignment = ENiagaraSpriteAlignment::Unaligned;
    this->FacingMode = ENiagaraSpriteFacingMode::FaceCamera;
    this->SortMode = ENiagaraSortMode::None;
    this->bSubImageBlend = false;
    this->bRemoveHMDRollInVR = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bGpuLowLatencyTranslucency = true;
    this->MinFacingCameraBlendDistance = 0.00f;
    this->MaxFacingCameraBlendDistance = 0.00f;
    this->bEnableCameraDistanceCulling = false;
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 1000.00f;
    this->RendererVisibility = 0;
}

