#include "MatineeCameraShake.h"
#include "Templates/SubclassOf.h"

class APlayerCameraManager;
class UCameraShakeSourceComponent;
class UMatineeCameraShake;

UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}



bool UMatineeCameraShake::ReceiveIsFinished_Implementation() const {
    return false;
}


UMatineeCameraShake::UMatineeCameraShake() {
    this->OscillationDuration = 0.00f;
    this->OscillationBlendInTime = 0.10f;
    this->OscillationBlendOutTime = 0.20f;
    this->AnimPlayRate = 1.00f;
    this->AnimScale = 1.00f;
    this->AnimBlendInTime = 0.20f;
    this->AnimBlendOutTime = 0.20f;
    this->RandomAnimSegmentDuration = 0.00f;
    this->Anim = NULL;
    this->AnimSequence = NULL;
    this->bRandomAnimSegment = false;
    this->OscillatorTimeRemaining = 0.00f;
    this->AnimInst = NULL;
    this->SequenceShakePattern = NULL;
}

