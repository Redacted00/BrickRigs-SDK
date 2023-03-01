#include "SequenceCameraShakePattern.h"
#include "SequenceCameraShakeCameraStandIn.h"
#include "SequenceCameraShakeSequencePlayer.h"

USequenceCameraShakePattern::USequenceCameraShakePattern() {
    this->Sequence = NULL;
    this->PlayRate = 1.00f;
    this->Scale = 1.00f;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.40f;
    this->RandomSegmentDuration = 0.00f;
    this->bRandomSegment = false;
    this->Player = CreateDefaultSubobject<USequenceCameraShakeSequencePlayer>(TEXT("Player"));
    this->CameraStandIn = CreateDefaultSubobject<USequenceCameraShakeCameraStandIn>(TEXT("CameraStandIn"));
}

