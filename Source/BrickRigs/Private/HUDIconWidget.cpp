#include "HUDIconWidget.h"

void UHUDIconWidget::UpdateNameText() {
}

void UHUDIconWidget::UpdateIconStyle_Implementation(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InStyleState) {
}

void UHUDIconWidget::UpdateIconRotation_Implementation(float NewRotation) {
}

void UHUDIconWidget::UninitializeIcon_Implementation() {
}

void UHUDIconWidget::SetIconSlot(FBrickUIIconSlot NewSlot) {
}

void UHUDIconWidget::SetIconColorStyle(EBrickUIColorStyle NewColorStyle) {
}

void UHUDIconWidget::PostInitializeIcon_Implementation() {
}

void UHUDIconWidget::InitializeIcon_Implementation() {
}

bool UHUDIconWidget::GetIconWorldRotation_Implementation(float& OutRotation) const {
    return false;
}

FText UHUDIconWidget::GetIconDisplayName_Implementation() const {
    return FText::GetEmpty();
}

UHUDIconWidget::UHUDIconWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IconImage = NULL;
}

