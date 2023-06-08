#include "BrickComboBoxWidget.h"



void UBrickComboBoxWidget::ToggleComboBoxExpanded() {
}

void UBrickComboBoxWidget::SetSelectedItem(int32 InItem) {
}

void UBrickComboBoxWidget::SetMaxListItems(int32 InMaxListItems) {
}

void UBrickComboBoxWidget::SetMaxItemsPerRow(int32 InMaxItemsPerRow) {
}

void UBrickComboBoxWidget::SetComboBoxExpanded(bool bNewExpanded) {
}

void UBrickComboBoxWidget::OnComboBoxMenuItemSelected(int32 Item, EValueChangedEventType EventType) {
}

bool UBrickComboBoxWidget::IsComboBoxExpanded() const {
    return false;
}

void UBrickComboBoxWidget::InitItemsComplex(const TArray<int32>& InItems, int32 InSelectedItem) {
}

void UBrickComboBoxWidget::InitItems(int32 InNumItems, int32 InSelectedItem) {
}

UWidget* UBrickComboBoxWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

int32 UBrickComboBoxWidget::GetSelectedItem() const {
    return 0;
}

int32 UBrickComboBoxWidget::GetNumItems() const {
    return 0;
}


void UBrickComboBoxWidget::AddItemContainerWidget_Implementation(UBrickComboBoxItemContainerWidget* Widget, int32 Index) {
}

UBrickComboBoxWidget::UBrickComboBoxWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SelectedItemWidget = NULL;
    this->MenuWidget = NULL;
    this->ItemsPanel = NULL;
    this->ItemWidgetClass = NULL;
    this->ItemContainerWidgetClass = NULL;
    this->MenuWidgetClass = NULL;
    this->MaxListItems = -1;
    this->MaxItemsPerRow = 0;
    this->ItemPadding = 10.00f;
}

