#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CopyrightNotice = TEXT("Copyright Fluppisoft, 2022");
    this->ProjectName = TEXT("BrickRigs");
    this->ProjectVersion = TEXT("1.3.2");
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}

