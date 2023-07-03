#include "PlayerInputComponent.h"

void UPlayerInputComponent::OnReleasedMoveCamera() {
}

void UPlayerInputComponent::OnReleasedInteractTer() {
}

void UPlayerInputComponent::OnReleasedInteractSec() {
}

void UPlayerInputComponent::OnReleasedInteractPri() {
}

void UPlayerInputComponent::OnPressedScoreboard() {
}

void UPlayerInputComponent::OnPressedMoveCamera() {
}

void UPlayerInputComponent::OnPressedInteractTer() {
}

void UPlayerInputComponent::OnPressedInteractSec() {
}

void UPlayerInputComponent::OnPressedInteractPri() {
}

void UPlayerInputComponent::OnPressedCycleMeasurementSystem() {
}

void UPlayerInputComponent::OnPressedChat() {
}

void UPlayerInputComponent::InteractAxis(float Val) {
}

FText UPlayerInputComponent::GetCycleMeasurementSystemValueText() const {
    return FText::GetEmpty();
}

UPlayerInputComponent::UPlayerInputComponent() {
    this->FocusedBrickInteractionComponent = NULL;
}

