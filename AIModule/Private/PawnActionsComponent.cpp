#include "PawnActionsComponent.h"

class APawn;
class UObject;
class UPawnAction;

bool UPawnActionsComponent::K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator) {
    return false;
}

bool UPawnActionsComponent::K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority) {
    return false;
}

TEnumAsByte<EPawnActionAbortState::Type> UPawnActionsComponent::K2_ForceAbortAction(UPawnAction* ActionToAbort) {
    return EPawnActionAbortState::NeverStarted;
}

TEnumAsByte<EPawnActionAbortState::Type> UPawnActionsComponent::K2_AbortAction(UPawnAction* ActionToAbort) {
    return EPawnActionAbortState::NeverStarted;
}

UPawnActionsComponent::UPawnActionsComponent() {
    this->ControlledPawn = NULL;
    this->ActionStacks.AddDefaulted(5);
    this->CurrentAction = NULL;
}

