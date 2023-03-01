#include "CheckBox.h"

void UCheckBox::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UCheckBox::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UCheckBox::SetIsChecked(bool InIsChecked) {
}

void UCheckBox::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}

void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
}

bool UCheckBox::IsPressed() const {
    return false;
}

bool UCheckBox::IsChecked() const {
    return false;
}

ECheckBoxState UCheckBox::GetCheckedState() const {
    return ECheckBoxState::Unchecked;
}

UCheckBox::UCheckBox() {
    this->CheckedState = ECheckBoxState::Unchecked;
    this->Style = NULL;
    this->UncheckedImage = NULL;
    this->UncheckedHoveredImage = NULL;
    this->UncheckedPressedImage = NULL;
    this->CheckedImage = NULL;
    this->CheckedHoveredImage = NULL;
    this->CheckedPressedImage = NULL;
    this->UndeterminedImage = NULL;
    this->UndeterminedHoveredImage = NULL;
    this->UndeterminedPressedImage = NULL;
    this->HorizontalAlignment = HAlign_Fill;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
}

