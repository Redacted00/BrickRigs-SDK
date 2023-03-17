#include "BaseInputComponent.h"

void UBaseInputComponent::ZoomIn(float Val) {
}

void UBaseInputComponent::SpeedUp(float Val) {
}

void UBaseInputComponent::OnReleasedPivotCamera() {
}

void UBaseInputComponent::OnPressedZoomOutStep() {
}

void UBaseInputComponent::OnPressedZoomInStep() {
}

void UBaseInputComponent::OnPressedSpeedUpStep() {
}

void UBaseInputComponent::OnPressedSpeedDownStep() {
}

void UBaseInputComponent::OnPressedPivotCamera() {
}

void UBaseInputComponent::OnPressedCycleHUDVisibility() {
}

void UBaseInputComponent::MouseMoveUp(float Val) {
}

void UBaseInputComponent::MouseMoveRight(float Val) {
}

void UBaseInputComponent::LookUp(float Val) {
}

void UBaseInputComponent::LookRight(float Val) {
}

FText UBaseInputComponent::GetCycleHUDVisibilityValueText() const {
    return FText::GetEmpty();
}

UBaseInputComponent::UBaseInputComponent() {
    this->BasePlayerController = NULL;
    this->PlayerController = NULL;
    this->bShowInInputHelp = true;
    this->bForceConsumeInput = false;
}

