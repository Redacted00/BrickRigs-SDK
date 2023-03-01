#include "EQSTestingPawn.h"

AEQSTestingPawn::AEQSTestingPawn() {
    this->QueryTemplate = NULL;
    this->TimeLimitPerStep = -1.00f;
    this->StepToDebugDraw = 0;
    this->HighlightMode = EEnvQueryHightlightMode::All;
    this->bDrawLabels = true;
    this->bDrawFailedItems = true;
    this->bReRunQueryOnlyOnFinishedMove = true;
    this->bShouldBeVisibleInGame = false;
    this->bTickDuringGame = false;
    this->QueryingMode = EEnvQueryRunMode::AllMatching;
}

