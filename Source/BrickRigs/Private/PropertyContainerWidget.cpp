#include "PropertyContainerWidget.h"



bool UPropertyContainerWidget::OpenContextMenu() {
    return false;
}

UWidget* UPropertyContainerWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}


UPropertyContainerWidget::UPropertyContainerWidget() {
    this->PropertyWidget = NULL;
    this->NameTextBlock = NULL;
}

