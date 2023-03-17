#include "InventoryPopupWidget.h"


void UInventoryPopupWidget::OnDropButtonClicked() {
}

UInventoryPopupWidget::UInventoryPopupWidget() {
    this->DragWidget = NULL;
    this->DragCanvasPanel = NULL;
    this->OwnInventoryContainerWidget = NULL;
    this->OtherInventoryContainerWidget = NULL;
    this->DropButton = NULL;
    this->SlotWidgetClass = NULL;
    this->SubInvetoryContainerWidgetClass = NULL;
}

