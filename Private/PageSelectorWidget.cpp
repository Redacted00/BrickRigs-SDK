#include "PageSelectorWidget.h"


void UPageSelectorWidget::SetCurrentPage(int32 NewPage) {
}

void UPageSelectorWidget::OnSliderValueChanged(float NewValue, EValueChangedEventType EventType) {
}

void UPageSelectorWidget::InitializePages(int32 InNumPages, int32 InCurrentPage, int32 InNumResults) {
}

void UPageSelectorWidget::GotoNextPage(bool bForward, bool bSkipToEnd) {
}

int32 UPageSelectorWidget::GetCurrentPage() const {
    return 0;
}

UPageSelectorWidget::UPageSelectorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NumPages = 1;
    this->Slider = NULL;
}

