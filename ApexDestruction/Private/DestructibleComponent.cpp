#include "DestructibleComponent.h"

class UDestructibleMesh;

void UDestructibleComponent::SetDestructibleMesh(UDestructibleMesh* NewMesh) {
}

UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh() {
    return NULL;
}

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
}

void UDestructibleComponent::ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength) {
}

UDestructibleComponent::UDestructibleComponent() {
    this->bFractureEffectOverride = false;
    this->bEnableHardSleeping = false;
    this->LargeChunkThreshold = 25.00f;
}

