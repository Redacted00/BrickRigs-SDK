#include "BrickUserSettings.h"

class UBrickUserSettings;

UBrickUserSettings* UBrickUserSettings::GetUserSettings() {
    return NULL;
}

UBrickUserSettings::UBrickUserSettings() {
    this->holdkeytime = 0.30f;
    this->mousetaptime = 0.10f;
    this->hostservertype = EHostServerType::None;
    this->bapplymatchsettings = true;
    this->bfadematchsettings = true;
    this->gamepadcursorspeed = 1.00f;
    this->hudvisibility = EHUDVisibility::Full;
    this->measurementsystem = EMeasurementSystem::Metric;
    this->chatcontext = EChatContext::Local;
    this->mastervolume = 0.00f;
    this->musicvolume = 0.00f;
    this->fieldofview = 90.00f;
    this->FOVAxisConstraint = AspectRatio_MaintainXFOV;
    this->CameraMode = ECameraMode::Global;
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
    this->editorgridsnappingdistance = 10.00f;
    this->editorgridsnappingangle = 11.25f;
    this->editorbricksnappingdistance = 10.00f;
    this->editorbricksnappingangle = 5.00f;
    this->beditorsnappingenabled = true;
    this->beditorgizmoworldspace = false;
    this->editorzoomratio = 0.00f;
    this->editorcameraspeedratio = 1.00f;
    this->freecamspeedratio = 0.15f;
    this->freecamshiftspeedratio = 1.00f;
    this->projectilecamzoomratio = 1.00f;
}

