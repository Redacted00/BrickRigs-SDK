#include "BrickComboBoxItemContainerWidget.h"


void UBrickComboBoxItemContainerWidget::SelectItem() {
}

void UBrickComboBoxItemContainerWidget::OnUpdateButtonContentStyle(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InContentStyleState) {
}

UWidget* UBrickComboBoxItemContainerWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}


UBrickComboBoxItemContainerWidget::UBrickComboBoxItemContainerWidget() {
    this->ItemWidget = NULL;
    this->Button = NULL;
}

