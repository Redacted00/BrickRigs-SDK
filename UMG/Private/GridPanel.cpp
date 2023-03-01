#include "GridPanel.h"

class UGridSlot;
class UWidget;

void UGridPanel::SetRowFill(int32 ColumnIndex, float Coefficient) {
}

void UGridPanel::SetDefaultRowFill(float Coefficient) {
}

void UGridPanel::SetDefaultColumnFill(float Coefficient) {
}

void UGridPanel::SetColumnFill(int32 ColumnIndex, float Coefficient) {
}

void UGridPanel::SetCellSizeOverride(const FVector2D& Override) {
}

UGridSlot* UGridPanel::AddChildToGrid(UWidget* Content, int32 InRow, int32 InColumn) {
    return NULL;
}

UGridPanel::UGridPanel() {
    this->DefaultColumnFill = 0.00f;
    this->DefaultRowFill = 0.00f;
}

