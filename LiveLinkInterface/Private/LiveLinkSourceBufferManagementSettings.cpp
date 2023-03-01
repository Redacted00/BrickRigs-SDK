#include "LiveLinkSourceBufferManagementSettings.h"

FLiveLinkSourceBufferManagementSettings::FLiveLinkSourceBufferManagementSettings() {
    this->bValidEngineTimeEnabled = false;
    this->ValidEngineTime = 0.00f;
    this->EngineTimeOffset = 0.00f;
    this->EngineTimeClockOffset = 0.00f;
    this->bGenerateSubFrame = false;
    this->bUseTimecodeSmoothLatest = false;
    this->bValidTimecodeFrameEnabled = false;
    this->ValidTimecodeFrame = 0;
    this->TimecodeFrameOffset = 0.00f;
    this->TimecodeClockOffset = 0.00f;
    this->LatestOffset = 0;
    this->MaxNumberOfFrameToBuffered = 0;
    this->bKeepAtLeastOneFrame = false;
}

