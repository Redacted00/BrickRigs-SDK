#include "LevelSequenceProjectSettings.h"

ULevelSequenceProjectSettings::ULevelSequenceProjectSettings() {
    this->bDefaultLockEngineToDisplayRate = false;
    this->DefaultDisplayRate = TEXT("30fps");
    this->DefaultTickResolution = TEXT("24000fps");
    this->DefaultClockSource = EUpdateClockSource::Tick;
}

