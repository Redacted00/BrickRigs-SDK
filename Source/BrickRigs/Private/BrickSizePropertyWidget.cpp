#include "BrickSizePropertyWidget.h"

void UBrickSizePropertyWidget::OnZSliderValueChanged(const FBrickUnits& NewValue, EValueChangedEventType EventType) {
}

void UBrickSizePropertyWidget::OnYSliderValueChanged(const FBrickUnits& NewValue, EValueChangedEventType EventType) {
}

void UBrickSizePropertyWidget::OnXSliderValueChanged(const FBrickUnits& NewValue, EValueChangedEventType EventType) {
}

UBrickSizePropertyWidget::UBrickSizePropertyWidget() {
    this->XSlider = NULL;
    this->YSlider = NULL;
    this->ZSlider = NULL;
}

