#include "BaseEditorInputComponent.h"

void UBaseEditorInputComponent::OnReleasedSelect() {
}

void UBaseEditorInputComponent::OnReleasedMovePerpendicular() {
}

void UBaseEditorInputComponent::OnReleasedAddToSelection() {
}

void UBaseEditorInputComponent::OnPressedUploadItemAs() {
}

void UBaseEditorInputComponent::OnPressedUploadItem() {
}

void UBaseEditorInputComponent::OnPressedUnhideAll() {
}

void UBaseEditorInputComponent::OnPressedUndo() {
}

void UBaseEditorInputComponent::OnPressedToggleTransformSpace() {
}

void UBaseEditorInputComponent::OnPressedToggleSnapping() {
}

void UBaseEditorInputComponent::OnPressedToggleSelection() {
}

void UBaseEditorInputComponent::OnPressedToggleMirrorMode() {
}

void UBaseEditorInputComponent::OnPressedSelectByType() {
}

void UBaseEditorInputComponent::OnPressedSelectByPattern() {
}

void UBaseEditorInputComponent::OnPressedSelectByMaterial() {
}

void UBaseEditorInputComponent::OnPressedSelectByColor() {
}

void UBaseEditorInputComponent::OnPressedSelectByClass() {
}

void UBaseEditorInputComponent::OnPressedSelectAttachedRecursive() {
}

void UBaseEditorInputComponent::OnPressedSelectAttached() {
}

void UBaseEditorInputComponent::OnPressedSelect() {
}

void UBaseEditorInputComponent::OnPressedSaveItemAs() {
}

void UBaseEditorInputComponent::OnPressedSaveItem() {
}

void UBaseEditorInputComponent::OnPressedRedo() {
}

void UBaseEditorInputComponent::OnPressedOpenItem() {
}

void UBaseEditorInputComponent::OnPressedMoveSelection() {
}

void UBaseEditorInputComponent::OnPressedMovePerpendicular() {
}

void UBaseEditorInputComponent::OnPressedMoveAxisZ() {
}

void UBaseEditorInputComponent::OnPressedMoveAxisY() {
}

void UBaseEditorInputComponent::OnPressedMoveAxisX() {
}

void UBaseEditorInputComponent::OnPressedMirrorSelection() {
}

void UBaseEditorInputComponent::OnPressedInvertSelection() {
}

void UBaseEditorInputComponent::OnPressedImportItem() {
}

void UBaseEditorInputComponent::OnPressedHideSelection() {
}

void UBaseEditorInputComponent::OnPressedFocusSelection() {
}

void UBaseEditorInputComponent::OnPressedExitEditorWithVehicle() {
}

void UBaseEditorInputComponent::OnPressedExitEditor() {
}

void UBaseEditorInputComponent::OnPressedEditorCommit() {
}

void UBaseEditorInputComponent::OnPressedEditorCancel() {
}

void UBaseEditorInputComponent::OnPressedEditMetaData() {
}

void UBaseEditorInputComponent::OnPressedDuplicateSelectionMirrored() {
}

void UBaseEditorInputComponent::OnPressedDuplicateSelection() {
}

void UBaseEditorInputComponent::OnPressedDeleteSelection() {
}

void UBaseEditorInputComponent::OnPressedCycleViewMode() {
}

void UBaseEditorInputComponent::OnPressedCaptureThumbnail() {
}

void UBaseEditorInputComponent::OnPressedAddToSelection() {
}

bool UBaseEditorInputComponent::GetUploadItemEnabled() const {
    return false;
}

bool UBaseEditorInputComponent::GetUploadItemAsEnabled() const {
    return false;
}

bool UBaseEditorInputComponent::GetSaveItemEnabled() const {
    return false;
}

bool UBaseEditorInputComponent::GetSaveItemAsEnabled() const {
    return false;
}

bool UBaseEditorInputComponent::GetExitEditorWithVehicleEnabled() const {
    return false;
}

FText UBaseEditorInputComponent::GetCycleViewModeValueText() const {
    return FText::GetEmpty();
}

UBaseEditorInputComponent::UBaseEditorInputComponent() {
    this->BrickEditor = NULL;
}

