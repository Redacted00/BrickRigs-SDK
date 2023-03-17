#include "BrickTextBlock.h"

void UBrickTextBlock::SetTextStyle(EBrickUITextStyle NewStyle) {
}

void UBrickTextBlock::SetStyleState(EBrickUIStyleState NewState) {
}

void UBrickTextBlock::SetColorStyle(EBrickUIColorStyle NewStyle) {
}

UBrickTextBlock::UBrickTextBlock() {
    this->ColorStyle = EBrickUIColorStyle::Default;
    this->StyleState = EBrickUIStyleState::Foreground;
    this->TextStyle = EBrickUITextStyle::Default;
}

