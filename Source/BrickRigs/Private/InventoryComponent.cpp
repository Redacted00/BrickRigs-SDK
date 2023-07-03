#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UInventoryComponent::MulticastOnPickedUpItems_Implementation() {
}

void UInventoryComponent::Interact_Inventory(ABrickPlayerController* PC) {
}

void UInventoryComponent::DebugSpawnItems(TSubclassOf<AInventoryItem> ItemClass, int32 Amount) {
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, Inventory);
}

UInventoryComponent::UInventoryComponent() {
    this->AudioComponent = NULL;
}

