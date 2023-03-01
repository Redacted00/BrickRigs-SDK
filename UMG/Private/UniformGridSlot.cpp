#include "UniformGridSlot.h"

void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UUniformGridSlot::SetRow(int32 InRow) {
}

void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UUniformGridSlot::SetColumn(int32 InColumn) {
}

UUniformGridSlot::UUniformGridSlot() {
    this->HorizontalAlignment = HAlign_Left;
    this->VerticalAlignment = VAlign_Top;
    this->Row = 0;
    this->Column = 0;
}

