#include "ClothingSimulationInteractor.h"

class UClothingInteractor;

void UClothingSimulationInteractor::SetNumSubsteps(int32 NumSubsteps) {
}

void UClothingSimulationInteractor::SetNumIterations(int32 NumIterations) {
}

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness) {
}

void UClothingSimulationInteractor::PhysicsAssetUpdated() {
}

float UClothingSimulationInteractor::GetSimulationTime() const {
    return 0.0f;
}

int32 UClothingSimulationInteractor::GetNumSubsteps() const {
    return 0;
}

int32 UClothingSimulationInteractor::GetNumKinematicParticles() const {
    return 0;
}

int32 UClothingSimulationInteractor::GetNumIterations() const {
    return 0;
}

int32 UClothingSimulationInteractor::GetNumDynamicParticles() const {
    return 0;
}

int32 UClothingSimulationInteractor::GetNumCloths() const {
    return 0;
}

UClothingInteractor* UClothingSimulationInteractor::GetClothingInteractor(const FString& ClothingAssetName) const {
    return NULL;
}

void UClothingSimulationInteractor::EnableGravityOverride(const FVector& InVector) {
}

void UClothingSimulationInteractor::DisableGravityOverride() {
}

void UClothingSimulationInteractor::ClothConfigUpdated() {
}

UClothingSimulationInteractor::UClothingSimulationInteractor() {
}

