#include "FadingPanelWidget.h"

void UFadingPanelWidget::UpdateFadeAnimation_Implementation(float FadeAmount) {
}

bool UFadingPanelWidget::IsFadingOut() const {
    return false;
}

bool UFadingPanelWidget::IsFadingIn() const {
    return false;
}

bool UFadingPanelWidget::IsFadedIn() const {
    return false;
}

void UFadingPanelWidget::FadeOutTimer() {
}

void UFadingPanelWidget::FadeOut(bool bImmediate) {
}

void UFadingPanelWidget::FadeInTimer() {
}

void UFadingPanelWidget::FadeIn(bool bImmediate) {
}

UFadingPanelWidget::UFadingPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ContentSlot = NULL;
    this->FadeTime = 0.15f;
}

