#include "LiveLinkSettings.h"
#include "LiveLinkBasicFrameInterpolationProcessor.h"

ULiveLinkSettings::ULiveLinkSettings() {
    this->DefaultRoleSettings.AddDefaulted(1);
    this->FrameInterpolationProcessor = ULiveLinkBasicFrameInterpolationProcessor::StaticClass();
    this->ClockOffsetCorrectionStep = 0.00f;
    this->DefaultMessageBusSourceMode = ELiveLinkSourceMode::EngineTime;
    this->MessageBusPingRequestFrequency = 1.00f;
    this->MessageBusHeartbeatFrequency = 1.00f;
    this->MessageBusHeartbeatTimeout = 2.00f;
    this->MessageBusTimeBeforeRemovingInactiveSource = 30.00f;
    this->TimeWithoutFrameToBeConsiderAsInvalid = 0.50f;
    this->TextSizeSource = 16;
    this->TextSizeSubject = 12;
}

