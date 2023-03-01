#include "DragDropOperation.h"

void UDragDropOperation::Drop_Implementation(const FPointerEvent& PointerEvent) {
}

void UDragDropOperation::Dragged_Implementation(const FPointerEvent& PointerEvent) {
}

void UDragDropOperation::DragCancelled_Implementation(const FPointerEvent& PointerEvent) {
}

UDragDropOperation::UDragDropOperation() {
    this->Payload = NULL;
    this->DefaultDragVisual = NULL;
    this->Pivot = EDragPivot::CenterCenter;
}

