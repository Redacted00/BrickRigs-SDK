#include "BoolPropertyWidget.h"

void UBoolPropertyWidget::OnItemSelected(int32 Item, EValueChangedEventType EventType) {
}

void UBoolPropertyWidget::OnCheckedStateChanged(bool bNewChecked, EValueChangedEventType EventType) {
}

void UBoolPropertyWidget::InitializeItem(int32 Item, FBrickComboBoxItemParams& OutParams) {
}

UBoolPropertyWidget::UBoolPropertyWidget() {
    this->CheckBox = NULL;
    this->ComboBox = NULL;
}

