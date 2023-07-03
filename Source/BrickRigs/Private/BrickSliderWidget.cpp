#include "BrickSliderWidget.h"


void UBrickSliderWidget::SetValueType(ENumericValueType InType) {
}

void UBrickSliderWidget::SetValueRange(float InMinValue, float InMaxValue) {
}

void UBrickSliderWidget::SetValue(float NewValue) {
}

void UBrickSliderWidget::SetMaxFractionalDigits(int32 InMaxDigits) {
}

void UBrickSliderWidget::SetIsReadOnly(bool bInReadOnly) {
}

void UBrickSliderWidget::SetIsMarquee(bool bInMarquee) {
}

void UBrickSliderWidget::SetCustomTextFormat(const FText& InFormat) {
}

void UBrickSliderWidget::OnTextChanged(const FText& NewText, EValueChangedEventType EventType) {
}

void UBrickSliderWidget::OnMeasurementSystemChanged(EMeasurementSystem NewSystem) {
}

float UBrickSliderWidget::GetValue() const {
    return 0.0f;
}

UBrickSliderWidget::UBrickSliderWidget() {
    this->TextBox = NULL;
    this->Value = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->ValueStep = 0.00f;
    this->ValueType = ENumericValueType::Float;
    this->MaxFractionalDigits = -1;
    this->bIsReadOnly = false;
    this->bIsMarquee = false;
}

