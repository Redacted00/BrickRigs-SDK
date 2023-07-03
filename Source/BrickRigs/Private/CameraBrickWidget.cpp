#include "CameraBrickWidget.h"


UCameraBrickWidget::UCameraBrickWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bUpdateTargetRange = false;
    this->TargetRangeUpdateInterval = 0.10f;
}

