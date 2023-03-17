#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PhysicsReplicationInterface.h"
#include "RepPhysicsMovement.h"
#include "Templates/SubclassOf.h"
#include "InventoryItem.generated.h"

class ABrickPlayerController;
class UAudioComponent;
class UInteractionComponent;
class UInventoryComponent;
class UItemStaticInfo;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AInventoryItem : public AActor, public IPhysicsReplicationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepPhysicsMovement, meta=(AllowPrivateAccess=true))
    FRepPhysicsMovement RepPhysicsMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* CollisionAudioComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemStaticInfo> StaticInfoClass;
    
    AInventoryItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStaticMeshSleep(UPrimitiveComponent* Primitive, FName BoneName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepPhysicsMovement();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Interact_PickUp(ABrickPlayerController* PC);
    
    
    // Fix for true pure virtual functions not being implemented
};

