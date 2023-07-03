#include "BrickUnitsSliderWidget.h"

void UBrickUnitsSliderWidget::SetValueRange(const FBrickUnits& InMinValue, const FBrickUnits& InMaxValue) {
}

void UBrickUnitsSliderWidget::SetValue(const FBrickUnits& NewValue) {
}

void UBrickUnitsSliderWidget::OnUnitsSliderValueChanged(float NewValue, EValueChangedEventType EventType) {
}

void UBrickUnitsSliderWidget::OnSubUnitsSliderValueChanged(float NewValue, EValueChangedEventType EventType) {
}

UBrickUnitsSliderWidget::UBrickUnitsSliderWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UnitsSlider = NULL;
    this->SubUnitsSlider = NULL;
}

