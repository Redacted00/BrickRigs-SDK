#include "ScoreboardWidget.h"

UScoreboardWidget::UScoreboardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TeamsPanel = NULL;
    this->TeamWidgetClass = NULL;
    this->PlayerWidgetClass = NULL;
    this->NumTeamsPerRow = 3;
    this->TeamSpacing = 15.00f;
    this->bCanJoinTeams = false;
}

