#include "SpinBox.h"

void USpinBox::SetValue(float NewValue) {
}

void USpinBox::SetMinValue(float NewValue) {
}

void USpinBox::SetMinSliderValue(float NewValue) {
}

void USpinBox::SetMinFractionalDigits(int32 NewValue) {
}

void USpinBox::SetMaxValue(float NewValue) {
}

void USpinBox::SetMaxSliderValue(float NewValue) {
}

void USpinBox::SetMaxFractionalDigits(int32 NewValue) {
}

void USpinBox::SetForegroundColor(FSlateColor InForegroundColor) {
}

void USpinBox::SetDelta(float NewValue) {
}

void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue) {
}

float USpinBox::GetValue() const {
    return 0.0f;
}

float USpinBox::GetMinValue() const {
    return 0.0f;
}

float USpinBox::GetMinSliderValue() const {
    return 0.0f;
}

int32 USpinBox::GetMinFractionalDigits() const {
    return 0;
}

float USpinBox::GetMaxValue() const {
    return 0.0f;
}

float USpinBox::GetMaxSliderValue() const {
    return 0.0f;
}

int32 USpinBox::GetMaxFractionalDigits() const {
    return 0;
}

float USpinBox::GetDelta() const {
    return 0.0f;
}

bool USpinBox::GetAlwaysUsesDeltaSnap() const {
    return false;
}

void USpinBox::ClearMinValue() {
}

void USpinBox::ClearMinSliderValue() {
}

void USpinBox::ClearMaxValue() {
}

void USpinBox::ClearMaxSliderValue() {
}

USpinBox::USpinBox() {
    this->Value = 0.00f;
    this->Style = NULL;
    this->MinFractionalDigits = 1;
    this->MaxFractionalDigits = 6;
    this->bAlwaysUsesDeltaSnap = false;
    this->Delta = 0.00f;
    this->SliderExponent = 1.00f;
    this->Justification = ETextJustify::Left;
    this->MinDesiredWidth = 0.00f;
    this->ClearKeyboardFocusOnCommit = false;
    this->SelectAllTextOnCommit = true;
    this->bOverride_MinValue = false;
    this->bOverride_MaxValue = false;
    this->bOverride_MinSliderValue = false;
    this->bOverride_MaxSliderValue = false;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->MinSliderValue = 0.00f;
    this->MaxSliderValue = 0.00f;
}

