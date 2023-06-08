#include "PropertiesPanelWidget.h"

void UPropertiesPanelWidget::UpdateProperties() {
}

bool UPropertiesPanelWidget::InitUserFocus() {
    return false;
}

void UPropertiesPanelWidget::ClearProperties() {
}

void UPropertiesPanelWidget::AddProperties(const TArray<UObject*>& InContainers, const FGameplayTagContainer& InCategories, bool bSearchProperties) {
}


UPropertiesPanelWidget::UPropertiesPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CategoryWidgetClass = NULL;
    this->ContainerWidgetClass = NULL;
    this->NumPropertiesPerRow = 1;
}

