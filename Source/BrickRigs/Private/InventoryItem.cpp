#include "InventoryItem.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AInventoryItem::OnStaticMeshSleep(UPrimitiveComponent* Primitive, FName BoneName) {
}

void AInventoryItem::OnRep_RepPhysicsMovement() {
}

void AInventoryItem::Interact_PickUp(ABrickPlayerController* PC) {
}

void AInventoryItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInventoryItem, RepPhysicsMovement);
}

AInventoryItem::AInventoryItem() {
    this->Mid = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->SkeletalMeshComponent = NULL;
    this->InteractionComponent = NULL;
    this->InventoryComponent = NULL;
    this->CollisionAudioComponent = NULL;
    this->StaticInfoClass = NULL;
}

