#include "ScoreboardPlayerWidget.h"



void UScoreboardPlayerWidget::UpdateButtonStyle_Implementation(bool bNewSelected, bool bIsLocalPlayer, TEnumAsByte<ETeamAttitude::Type> TeamAttitude) {
}

void UScoreboardPlayerWidget::OnButtonClicked() {
}

UScoreboardPlayerWidget::UScoreboardPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerState = NULL;
    this->Button = NULL;
    this->PositionTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->KillsTextBlock = NULL;
    this->DeathsTextBlock = NULL;
    this->ScoreTextBlock = NULL;
    this->PingIndicator = NULL;
}

