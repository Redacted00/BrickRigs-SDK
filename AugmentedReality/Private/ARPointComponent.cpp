#include "ARPointComponent.h"
#include "Net/UnrealNetwork.h"

void UARPointComponent::ServerUpdatePayload_Implementation(const FARPointUpdatePayload& NewPayload) {
}
bool UARPointComponent::ServerUpdatePayload_Validate(const FARPointUpdatePayload& NewPayload) {
    return true;
}



void UARPointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARPointComponent, ReplicatedPayload);
}

UARPointComponent::UARPointComponent() {
}

