#include "ListViewBase.h"

class UUserWidget;

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
}

void UListViewBase::SetScrollOffset(const float InScrollOffset) {
}

void UListViewBase::SetScrollBarVisibility(ESlateVisibility InVisibility) {
}

void UListViewBase::ScrollToTop() {
}

void UListViewBase::ScrollToBottom() {
}

void UListViewBase::RequestRefresh() {
}

void UListViewBase::RegenerateAllEntries() {
}

TArray<UUserWidget*> UListViewBase::GetDisplayedEntryWidgets() const {
    return TArray<UUserWidget*>();
}

UListViewBase::UListViewBase() {
    this->EntryWidgetClass = NULL;
    this->WheelScrollMultiplier = 1.00f;
    this->bEnableScrollAnimation = false;
    this->bEnableFixedLineOffset = false;
    this->FixedLineScrollOffset = 0.00f;
}

