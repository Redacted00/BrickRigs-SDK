#include "HUDIconContainerWidget.h"

void UHUDIconContainerWidget::UpdateContainerStyle_Implementation(bool bNewSelected, bool bNewCanSpawn, EBrickUIColorStyle NewColorStyle) {
}

void UHUDIconContainerWidget::OnUpdateButtonContentStyle_Implementation(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InContentStyleState) {
}

void UHUDIconContainerWidget::OnSpawnButtonDoubleClicked() {
}

void UHUDIconContainerWidget::OnSpawnButtonClicked() {
}


void UHUDIconContainerWidget::AddIconWidget_Implementation(UHUDIconWidget* Widget) {
}


UHUDIconContainerWidget::UHUDIconContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IconWidget = NULL;
    this->SpawnButton = NULL;
    this->NameTextBlock = NULL;
    this->MaxNameDrawDist = 1000.00f;
}

