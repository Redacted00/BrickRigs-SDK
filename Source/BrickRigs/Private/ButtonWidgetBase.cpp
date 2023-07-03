#include "ButtonWidgetBase.h"

void UButtonWidgetBase::UpdateContentStyle() {
}

void UButtonWidgetBase::SetIsSelected(bool bNewSelected) {
}

void UButtonWidgetBase::SetHiddenWhileUnfocused(bool bNewHidden) {
}

void UButtonWidgetBase::SetCustomFocus(bool bNewUseCustomFocus, bool bNewFocused) {
}

void UButtonWidgetBase::SetColorStyle(EBrickUIColorStyle NewColorStyle) {
}

void UButtonWidgetBase::SetBrushStyle(EBrickUIBrushStyle NewBrushStyle) {
}

void UButtonWidgetBase::OnUpdateContentStyle_Implementation(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InStyleState) {
}

EBrickUIStyleState UButtonWidgetBase::GetContentStyleState() const {
    return EBrickUIStyleState::Default;
}

EBrickUIStyleState UButtonWidgetBase::GetButtonStyleState() const {
    return EBrickUIStyleState::Default;
}

UButtonWidgetBase::UButtonWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Border = NULL;
    this->ColorStyle = EBrickUIColorStyle::Default;
    this->BrushStyle = EBrickUIBrushStyle::Button;
    this->bHiddenWhileUnfocused = false;
    this->bIsSelected = false;
}

