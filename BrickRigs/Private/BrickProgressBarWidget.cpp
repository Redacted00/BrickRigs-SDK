#include "BrickProgressBarWidget.h"




void UBrickProgressBarWidget::SetProgress(float NewProgress) {
}

void UBrickProgressBarWidget::SetIsMarquee(bool bNewMarquee) {
}

void UBrickProgressBarWidget::SetColorStyle(EBrickUIColorStyle InColorStyle) {
}

UBrickProgressBarWidget::UBrickProgressBarWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ColorStyle = EBrickUIColorStyle::Default;
    this->Progress = 0.00f;
    this->bIsMarquee = false;
}

