#include "DestructibleInstancesComponent.h"
#include "Net/UnrealNetwork.h"

void UDestructibleInstancesComponent::OnRep_ReplicatedDamage() {
}

void UDestructibleInstancesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDestructibleInstancesComponent, ReplicatedDamage);
}

UDestructibleInstancesComponent::UDestructibleInstancesComponent() {
    this->bUseHierarchicalISM = false;
    this->bForceFullFloatPrecision = false;
}

