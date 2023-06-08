#include "RadioButtonPanel.h"

void URadioButtonPanel::UnselectButton(URadioButtonWidget* Button) {
}

void URadioButtonPanel::UnselectAll() {
}

void URadioButtonPanel::SelectButton(URadioButtonWidget* Button) {
}

void URadioButtonPanel::GetSelectedWidgets(TArray<URadioButtonWidget*>& OutWidgets) {
}

URadioButtonWidget* URadioButtonPanel::GetSelectedWidget() const {
    return NULL;
}

int32 URadioButtonPanel::GetNumSelectedWidgets() const {
    return 0;
}

URadioButtonPanel::URadioButtonPanel() {
    this->MinSelectedButtons = 1;
    this->MaxSelectedButtons = 1;
}

