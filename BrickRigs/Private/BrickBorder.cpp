#include "BrickBorder.h"

void UBrickBorder::SetStyleState(EBrickUIStyleState NewState) {
}

void UBrickBorder::SetColorStyle(EBrickUIColorStyle NewStyle) {
}

void UBrickBorder::SetBrushStyle(EBrickUIBrushStyle NewStyle) {
}

UBrickBorder::UBrickBorder() {
    this->BrushStyle = EBrickUIBrushStyle::Default;
    this->ColorStyle = EBrickUIColorStyle::Default;
    this->StyleState = EBrickUIStyleState::Default;
}

