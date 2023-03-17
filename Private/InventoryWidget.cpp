#include "InventoryWidget.h"

UInventoryWidget::UInventoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SlotsPanel = NULL;
    this->NumSlotsPerRow = 1;
    this->SlotSpacing = 15.00f;
}

