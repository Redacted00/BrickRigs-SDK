#include "InvalidationBox.h"

void UInvalidationBox::SetCanCache(bool CanCache) {
}

void UInvalidationBox::InvalidateCache() {
}

bool UInvalidationBox::GetCanCache() const {
    return false;
}

UInvalidationBox::UInvalidationBox() {
    this->bCanCache = true;
    this->CacheRelativeTransforms = false;
}

