#include "GameplayTask.h"

void UGameplayTask::ReadyForActivation() {
}

void UGameplayTask::EndTask() {
}

UGameplayTask::UGameplayTask() {
    this->ResourceOverlapPolicy = ETaskResourceOverlapPolicy::StartOnTop;
    this->ChildTask = NULL;
}

