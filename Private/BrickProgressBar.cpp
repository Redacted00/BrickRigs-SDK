#include "BrickProgressBar.h"

void UBrickProgressBar::SetFillStyleState(EBrickUIStyleState NewState) {
}

void UBrickProgressBar::SetFillBrushStyle(EBrickUIBrushStyle NewStyle) {
}

void UBrickProgressBar::SetColorStyle(EBrickUIColorStyle InColorStyle) {
}

void UBrickProgressBar::SetBackgroundStyleState(EBrickUIStyleState NewState) {
}

void UBrickProgressBar::SetBackgroundBrushStyle(EBrickUIBrushStyle NewStyle) {
}

UBrickProgressBar::UBrickProgressBar() {
    this->ColorStyle = EBrickUIColorStyle::Default;
    this->BackgroundBrushStyle = EBrickUIBrushStyle::Default;
    this->BackgroundStyleState = EBrickUIStyleState::Default;
    this->FillBrushStyle = EBrickUIBrushStyle::Default;
    this->FillStyleState = EBrickUIStyleState::Foreground;
}

