#include "NiagaraBakerSettings.h"

UNiagaraBakerSettings::UNiagaraBakerSettings() {
    this->StartSeconds = 0.00f;
    this->DurationSeconds = 4.00f;
    this->FramesPerSecond = 60;
    this->bPreviewLooping = false;
    this->OutputTextures.AddDefaulted(1);
    this->CameraViewportMode = ENiagaraBakerViewMode::Perspective;
    this->CameraOrbitDistance = 200.00f;
    this->CameraFOV = 90.00f;
    this->CameraOrthoWidth = 512.00f;
    this->bUseCameraAspectRatio = false;
    this->CameraAspectRatio = 1.00f;
    this->bRenderComponentOnly = true;
}

