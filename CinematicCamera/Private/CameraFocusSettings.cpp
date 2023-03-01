#include "CameraFocusSettings.h"

FCameraFocusSettings::FCameraFocusSettings() {
    this->FocusMethod = ECameraFocusMethod::DoNotOverride;
    this->ManualFocusDistance = 0.00f;
    this->bDrawDebugFocusPlane = false;
    this->bSmoothFocusChanges = false;
    this->FocusSmoothingInterpSpeed = 0.00f;
    this->FocusOffset = 0.00f;
}

