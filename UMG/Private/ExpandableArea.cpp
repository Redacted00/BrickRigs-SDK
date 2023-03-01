#include "ExpandableArea.h"

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded) {
}

void UExpandableArea::SetIsExpanded(bool IsExpanded) {
}

bool UExpandableArea::GetIsExpanded() const {
    return false;
}

UExpandableArea::UExpandableArea() {
    this->bIsExpanded = false;
    this->MaxHeight = 0.00f;
    this->HeaderContent = NULL;
    this->BodyContent = NULL;
}

