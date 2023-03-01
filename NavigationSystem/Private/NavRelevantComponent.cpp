#include "NavRelevantComponent.h"

void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant) {
}

UNavRelevantComponent::UNavRelevantComponent() {
    this->bAttachToOwnersRoot = true;
    this->CachedNavParent = NULL;
}

