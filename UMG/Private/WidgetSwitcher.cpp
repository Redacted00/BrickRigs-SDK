#include "WidgetSwitcher.h"

class UWidget;

void UWidgetSwitcher::SetActiveWidgetIndex(int32 Index) {
}

void UWidgetSwitcher::SetActiveWidget(UWidget* Widget) {
}

UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32 Index) const {
    return NULL;
}

int32 UWidgetSwitcher::GetNumWidgets() const {
    return 0;
}

int32 UWidgetSwitcher::GetActiveWidgetIndex() const {
    return 0;
}

UWidget* UWidgetSwitcher::GetActiveWidget() const {
    return NULL;
}

UWidgetSwitcher::UWidgetSwitcher() {
    this->ActiveWidgetIndex = 0;
}

