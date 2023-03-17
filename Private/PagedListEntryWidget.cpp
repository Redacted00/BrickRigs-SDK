#include "PagedListEntryWidget.h"

void UPagedListEntryWidget::UpdateButtonSelected_Implementation(bool bNewSelected) {
}

void UPagedListEntryWidget::OnDoubleClickedEntry() {
}

void UPagedListEntryWidget::OnClickedEntry() {
}

void UPagedListEntryWidget::InitializeEntry_Implementation() {
}

UPagedListEntryWidget::UPagedListEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
}

