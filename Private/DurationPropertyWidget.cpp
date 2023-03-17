#include "DurationPropertyWidget.h"

void UDurationPropertyWidget::OnSliderValueChanged(float NewValue, EValueChangedEventType EventType) {
}

void UDurationPropertyWidget::OnInitializeComboBoxItem(int32 Item, FBrickComboBoxItemParams& OutParams) {
}

void UDurationPropertyWidget::OnComboBoxItemSelected(int32 Item, EValueChangedEventType EventType) {
}

UDurationPropertyWidget::UDurationPropertyWidget() {
    this->Slider = NULL;
    this->UnitsComboBox = NULL;
}

