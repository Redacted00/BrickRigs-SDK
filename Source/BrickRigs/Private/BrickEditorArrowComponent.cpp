#include "BrickEditorArrowComponent.h"

void UBrickEditorArrowComponent::SetLinearArrowLength(float NewLength) {
}

void UBrickEditorArrowComponent::SetColorStyle(EBrickUIColorStyle NewStyle) {
}

void UBrickEditorArrowComponent::SetCircularArrowRadius(float NewRadius) {
}

void UBrickEditorArrowComponent::SetCircularArrowAngle(float NewAngle) {
}

void UBrickEditorArrowComponent::SetArrowType(EBrickEditorArrowType NewType) {
}

UBrickEditorArrowComponent::UBrickEditorArrowComponent() {
    this->Mid = NULL;
    this->LinearArrowMesh = NULL;
    this->CircularArrowMesh = NULL;
    this->ArrowType = EBrickEditorArrowType::Linear;
    this->LinearArrowLength = 100.00f;
    this->CircularArrowAngle = 180.00f;
    this->CircularArrowRadius = 50.00f;
    this->ColorStyle = EBrickUIColorStyle::Default;
}

