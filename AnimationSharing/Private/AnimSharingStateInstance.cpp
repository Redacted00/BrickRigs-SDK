#include "AnimSharingStateInstance.h"

class AActor;

void UAnimSharingStateInstance::GetInstancedActors(TArray<AActor*>& Actors) {
}

UAnimSharingStateInstance::UAnimSharingStateInstance() {
    this->AnimationToPlay = NULL;
    this->PermutationTimeOffset = 0.00f;
    this->PlayRate = 1.00f;
    this->bStateBool = false;
    this->Instance = NULL;
}

