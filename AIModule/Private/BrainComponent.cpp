#include "BrainComponent.h"

void UBrainComponent::StopLogic(const FString& Reason) {
}

void UBrainComponent::StartLogic() {
}

void UBrainComponent::RestartLogic() {
}

bool UBrainComponent::IsRunning() const {
    return false;
}

bool UBrainComponent::IsPaused() const {
    return false;
}

UBrainComponent::UBrainComponent() {
    this->BlackboardComp = NULL;
    this->AIOwner = NULL;
}

