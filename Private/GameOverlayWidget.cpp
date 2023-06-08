#include "GameOverlayWidget.h"















void UGameOverlayWidget::OnHUDVisibilityChanged(EHUDVisibility NewVisibility) {
}

void UGameOverlayWidget::OnCameraModeChanged(ECameraMode NewMode) {
}







UGameOverlayWidget::UGameOverlayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ChatWidget = NULL;
    this->InputHelpWidget = NULL;
    this->MatchTimerWidget = NULL;
    this->MatchStateWidget = NULL;
    this->SpectatorPawn = NULL;
    this->ViewedVehicle = NULL;
    this->BrickEditor = NULL;
    this->HighPingIndicator = NULL;
    this->InputHelpClass = NULL;
    this->HUDNotificationClass = NULL;
    this->MatchTimerWidgetClass = NULL;
    this->MatchStateWidgetClass = NULL;
    this->TeamScoreWidgetClass = NULL;
    this->ChatWidgetClass = NULL;
    this->MinimalHUDMaxMatchTimerRemaining = 15;
}

