#include "PropertiesPanelWidget.h"

void UPropertiesPanelWidget::UpdateProperties() {
}

void UPropertiesPanelWidget::ClearProperties() {
}

void UPropertiesPanelWidget::AddProperties(const TArray<UObject*>& InContainers, const FBrickPropertyReflectionFilter& InFilter) {
}


UPropertiesPanelWidget::UPropertiesPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CategoryWidgetClass = NULL;
    this->ContainerWidgetClass = NULL;
    this->NumPropertiesPerRow = 1;
    this->Orientation = Orient_Horizontal;
}

