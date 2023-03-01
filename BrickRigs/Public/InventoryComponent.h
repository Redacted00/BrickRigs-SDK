#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Inventory.h"
#include "InventoryProperties.h"
#include "Templates/SubclassOf.h"
#include "InventoryComponent.generated.h"

class ABrickPlayerController;
class AInventoryItem;
class UAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FInventory Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryProperties InventoryProperties;
    
    UInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnPickedUpItems();
    
public:
    UFUNCTION(BlueprintCallable)
    void Interact_Inventory(ABrickPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void DebugSpawnItems(TSubclassOf<AInventoryItem> ItemClass, int32 Amount);
    
};

