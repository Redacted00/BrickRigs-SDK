#pragma once
#include "CoreMinimal.h"
#include "EExplosiveItemState.h"
#include "InventoryItem.h"
#include "ExplosiveItem.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AExplosiveItem : public AInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosiveState, meta=(AllowPrivateAccess=true))
    EExplosiveItemState ExplosiveState;
    
public:
    AExplosiveItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosiveState();
    
};

