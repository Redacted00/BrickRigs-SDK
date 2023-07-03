#include "BrickConnectorsISMComponent.h"

void UBrickConnectorsISMComponent::SetStyle(EBrickUIColorStyle NewColorStyle, EBrickUIColorStyle NewFocusedColorStyle, EBrickUIStyleState NewStyleState, EBrickUIStyleState NewFocusedStyleState) {
}

UBrickConnectorsISMComponent::UBrickConnectorsISMComponent() {
    this->Mid = NULL;
    this->ColorStyle = EBrickUIColorStyle::Neutral;
    this->FocusedColorStyle = EBrickUIColorStyle::Highlight;
    this->StyleState = EBrickUIStyleState::Button;
    this->FocusedStyleState = EBrickUIStyleState::Button;
}

