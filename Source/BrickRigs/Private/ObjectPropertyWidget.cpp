#include "ObjectPropertyWidget.h"

void UObjectPropertyWidget::OnItemSelected(int32 Item, EValueChangedEventType EventType) {
}

void UObjectPropertyWidget::InitializeItem(int32 Item, FBrickComboBoxItemParams& OutParams) {
}

UObjectPropertyWidget::UObjectPropertyWidget() {
    this->BrickComboBox = NULL;
    this->IconSize = 128.00f;
}

