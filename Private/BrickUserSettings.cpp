#include "BrickUserSettings.h"

UBrickUserSettings* UBrickUserSettings::GetUserSettings() {
    return NULL;
}

UBrickUserSettings::UBrickUserSettings() {
    this->holdkeytime = 0.30f;
    this->mousetaptime = 0.10f;
    this->hostservertype = EHostServerType::None;
    this->serverpassword = TEXT("1923MK");
    this->bapplymatchsettings = true;
    this->bfadematchsettings = true;
    this->gamepadcursorspeed = 1.00f;
    this->hudvisibility = EHUDVisibility::Full;
    this->measurementsystem = EMeasurementSystem::Metric;
    this->chatcontext = EChatContext::Local;
    this->mastervolume = 0.41f;
    this->musicvolume = 0.00f;
    this->fieldofview = 90.00f;
    this->FOVAxisConstraint = AspectRatio_MaintainXFOV;
    this->CameraMode = ECameraMode::Orbital;
    this->transmissionmode = ETransmissionMode::Manual;
    this->bautocountersteering = true;
    this->mousesensitivity = 1.00f;
    this->gamepadsensitivity = 1.00f;
    this->binvertviewpitch = false;
    this->btoggleaim = false;
    this->btogglesprint = false;
    this->btogglecrouch = true;
    this->benabledepthoffield = false;
    this->motionblurscale = 1.00f;
    this->antialiasingmethod = AAM_TemporalAA;
    this->editormirrormode = EBrickEditorMirrorMode::None;
    this->editorviewmode = EBrickEditorViewMode::Default;
    this->editormousemovesensitivity = 0.50f;
    this->editorgridsnappingdistance = 15.91f;
    this->editorgridsnappingangle = 14.35f;
    this->editorbricksnappingdistance = 3.21f;
    this->editorbricksnappingangle = 0.00f;
    this->beditorsnappingenabled = false;
    this->beditorgizmoworldspace = true;
    this->editorzoomratio = 0.10f;
    this->editorcameraspeedratio = 0.00f;
    this->freecamspeedratio = 0.95f;
    this->freecamshiftspeedratio = 1.00f;
    this->projectilecamzoomratio = 0.00f;
}

