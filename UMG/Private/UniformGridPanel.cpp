#include "UniformGridPanel.h"

class UUniformGridSlot;
class UWidget;

void UUniformGridPanel::SetSlotPadding(FMargin InSlotPadding) {
}

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth) {
}

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight) {
}

UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(UWidget* Content, int32 InRow, int32 InColumn) {
    return NULL;
}

UUniformGridPanel::UUniformGridPanel() {
    this->MinDesiredSlotWidth = 0.00f;
    this->MinDesiredSlotHeight = 0.00f;
}

