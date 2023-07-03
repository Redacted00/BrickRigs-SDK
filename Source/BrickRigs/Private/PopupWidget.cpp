#include "PopupWidget.h"

void UPopupWidget::UpdatePopupTitle() {
}

bool UPopupWidget::StepBack_Implementation() {
    return false;
}

bool UPopupWidget::ShouldBeVisibleInPopupContainer_Implementation() const {
    return false;
}

UWidget* UPopupWidget::GetWidgetToFocus_Implementation() {
    return NULL;
}

FText UPopupWidget::GetPopupTitle_Implementation() const {
    return FText::GetEmpty();
}

EPopupSizeRule UPopupWidget::GetPopupSizeRule_Implementation() const {
    return EPopupSizeRule::Auto;
}

UPopupContainerWidget* UPopupWidget::GetPopupContainer() const {
    return NULL;
}

UMenuButtonPanelWidget* UPopupWidget::GetButtonPanel() const {
    return NULL;
}

bool UPopupWidget::ConfirmPopup_Implementation() {
    return false;
}

void UPopupWidget::ClosePopup(EPopupResult Result) {
}

bool UPopupWidget::CanPopupBeClosed_Implementation() const {
    return false;
}

bool UPopupWidget::CancelPopup_Implementation() {
    return false;
}

UPopupWidget::UPopupWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PopupSizeRule = EPopupSizeRule::Auto;
}

