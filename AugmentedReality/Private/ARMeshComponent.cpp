#include "ARMeshComponent.h"
#include "Net/UnrealNetwork.h"

void UARMeshComponent::ServerUpdatePayload_Implementation(const FARMeshUpdatePayload& NewPayload) {
}
bool UARMeshComponent::ServerUpdatePayload_Validate(const FARMeshUpdatePayload& NewPayload) {
    return true;
}



void UARMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARMeshComponent, ReplicatedPayload);
}

UARMeshComponent::UARMeshComponent() {
}

