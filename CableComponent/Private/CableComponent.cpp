#include "CableComponent.h"

class AActor;
class USceneComponent;

void UCableComponent::SetAttachEndToComponent(USceneComponent* Component, FName SocketName) {
}

void UCableComponent::SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) {
}

void UCableComponent::GetCableParticleLocations(TArray<FVector>& Locations) const {
}

USceneComponent* UCableComponent::GetAttachedComponent() const {
    return NULL;
}

AActor* UCableComponent::GetAttachedActor() const {
    return NULL;
}

UCableComponent::UCableComponent() {
    this->bAttachStart = true;
    this->bAttachEnd = true;
    this->CableLength = 100.00f;
    this->NumSegments = 10;
    this->SubstepTime = 0.02f;
    this->SolverIterations = 1;
    this->bEnableStiffness = false;
    this->bUseSubstepping = true;
    this->bSkipCableUpdateWhenNotVisible = false;
    this->bSkipCableUpdateWhenNotOwnerRecentlyRendered = false;
    this->bEnableCollision = false;
    this->CollisionFriction = 0.20f;
    this->CableGravityScale = 1.00f;
    this->CableWidth = 10.00f;
    this->NumSides = 4;
    this->TileMaterial = 1.00f;
}

