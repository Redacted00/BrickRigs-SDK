#include "BrickUserSettings.h"

UBrickUserSettings* UBrickUserSettings::GetUserSettings() {
    return NULL;
}

UBrickUserSettings::UBrickUserSettings() {
    this->HoldKeyTime = 0.30f;
    this->MouseTapTime = 0.10f;
    this->HostServerType = EHostServerType::Private;
    this->hudvisibility = EHUDVisibility::Full;
    this->MeasurementSystem = EMeasurementSystem::Metric;
    this->ChatContext = EChatContext::Global;
    this->MasterVolume = 0.50f;
    this->MusicVolume = 0.00f;
    this->FieldOfView = 90.00f;
    this->FOVAxisConstraint = AspectRatio_MaintainXFOV;
    this->CameraMode = ECameraMode::Local;
    this->TransmissionMode = ETransmissionMode::Automatic;
    this->bAutoCounterSteering = false;
    this->MouseSensitivity = 1.00f;
    this->GamepadSensitivity = 1.00f;
    this->bInvertViewPitch = false;
    this->bToggleAim = false;
    this->bToggleSprint = false;
    this->bToggleCrouch = false;
    this->bEnableDepthOfField = true;
    this->MotionBlurScale = 0.00f;
    this->AntiAliasingMethod = AAM_FXAA;
    this->EditorMirrorMode = EBrickEditorMirrorMode::None;
    this->EditorViewMode = EBrickEditorViewMode::Default;
    this->EditorUIScale = 0.80f;
    this->EditorMouseMoveSensitivity = 0.50f;
    this->EditorGridSnappingDistance = 10.00f;
    this->EditorGridSnappingAngle = 15.00f;
    this->EditorBrickSnappingDistance = 10.00f;
    this->EditorBrickSnappingAngle = 5.00f;
    this->bEditorSnappingEnabled = true;
    this->bEditorGizmoWorldSpace = false;
    this->EditorZoomRatio = 0.00f;
    this->EditorCameraSpeedRatio = 0.15f;
    this->FreeCamSpeedRatio = 0.05f;
    this->FreeCamShiftSpeedRatio = 0.55f;
    this->ProjectileCamZoomRatio = 0.25f;
}

