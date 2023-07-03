#include "InventoryWidget.h"

UInventoryWidget::UInventoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SlotsPanel = NULL;
    this->NumSlotsPerRow = 1;
}

