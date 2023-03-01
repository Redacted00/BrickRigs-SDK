#include "PathFollowingComponent.h"

class AActor;
class ANavigationData;

void UPathFollowingComponent::OnNavDataRegistered(ANavigationData* NavData) {
}

void UPathFollowingComponent::OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

FVector UPathFollowingComponent::GetPathDestination() const {
    return FVector{};
}

TEnumAsByte<EPathFollowingAction::Type> UPathFollowingComponent::GetPathActionType() const {
    return EPathFollowingAction::Error;
}

UPathFollowingComponent::UPathFollowingComponent() {
    this->MovementComp = NULL;
    this->MyNavData = NULL;
}

