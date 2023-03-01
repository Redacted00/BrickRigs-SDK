#include "LiveLinkTransformAxisSwitchPreProcessor.h"

ULiveLinkTransformAxisSwitchPreProcessor::ULiveLinkTransformAxisSwitchPreProcessor() {
    this->FrontAxis = ELiveLinkAxis::X;
    this->RightAxis = ELiveLinkAxis::Y;
    this->UpAxis = ELiveLinkAxis::Z;
    this->bUseOffsetPosition = false;
    this->bUseOffsetOrientation = false;
}

