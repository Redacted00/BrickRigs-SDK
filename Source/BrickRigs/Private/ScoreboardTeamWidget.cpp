#include "ScoreboardTeamWidget.h"




void UScoreboardTeamWidget::JoinTeam() {
}

UScoreboardTeamWidget::UScoreboardTeamWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BrickTeam = NULL;
    this->TeamNameTextBlock = NULL;
    this->ScoreTextBlock = NULL;
    this->PlayersPanel = NULL;
    this->NumPlayersPerRow = 1;
    this->SortPlayersDelay = 1.00f;
}

