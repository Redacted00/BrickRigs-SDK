#include "BrickEditorWidget.h"




void UBrickEditorWidget::OnPlacableSearchTextChanged(const FText& NewText, EValueChangedEventType EventType) {
}

void UBrickEditorWidget::OnMeasurementSystemChanged(EMeasurementSystem NewSystem) {
}

void UBrickEditorWidget::ClearPlacableFilter() {
}



UBrickEditorWidget::UBrickEditorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentModeWidget = NULL;
    this->ItemHeaderWidget = NULL;
    this->PlacableSearchTextBox = NULL;
    this->PlacablesPanel = NULL;
    this->PropertiesPanel = NULL;
    this->PlacableWidgetClass = NULL;
    this->NumPlacablesPerRow = 3;
    this->PlacableSpacing = 15.00f;
    this->MoveModeWidgetClass = NULL;
    this->MirrorModeWidgetClass = NULL;
}

