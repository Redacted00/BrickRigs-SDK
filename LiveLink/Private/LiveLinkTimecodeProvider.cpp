#include "LiveLinkTimecodeProvider.h"

ULiveLinkTimecodeProvider::ULiveLinkTimecodeProvider() {
    this->Evaluation = ELiveLinkTimecodeProviderEvaluationType::Lerp;
    this->bOverrideFrameRate = false;
    this->BufferSize = 4;
}

