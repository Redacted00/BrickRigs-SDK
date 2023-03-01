#include "ColorPropertyWidget.h"


void UColorPropertyWidget::UpdateAlphaSliderVisibility_Implementation(bool bNewVisible) {
}

void UColorPropertyWidget::OnWheelColorChanged(const FLinearColor& NewColor, EValueChangedEventType EventType) {
}

void UColorPropertyWidget::OnValueChanged(float NewValue, EValueChangedEventType EventType) {
}

void UColorPropertyWidget::OnSaturationChanged(float NewValue, EValueChangedEventType EventType) {
}

void UColorPropertyWidget::OnPaletteColorChanged(const FLinearColor& NewColor, EValueChangedEventType EventType) {
}

void UColorPropertyWidget::OnHueChanged(float NewValue, EValueChangedEventType EventType) {
}

void UColorPropertyWidget::OnAlphaChanged(float NewValue, EValueChangedEventType EventType) {
}

UColorPropertyWidget::UColorPropertyWidget() {
    this->ColorWheel = NULL;
    this->ColorPalette = NULL;
    this->HueSlider = NULL;
    this->SaturationSlider = NULL;
    this->ValueSlider = NULL;
    this->AlphaSlider = NULL;
}

