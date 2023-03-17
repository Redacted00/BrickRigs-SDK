#include "InventorySlotWidget.h"


FEventReply UInventorySlotWidget::OnButtonDragged(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

void UInventorySlotWidget::OnButtonClicked() {
}


UInventorySlotWidget::UInventorySlotWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SubInventoryContainerWidget = NULL;
    this->Button = NULL;
    this->NameTextBlock = NULL;
    this->AmountTextBlock = NULL;
    this->IconImage = NULL;
}

