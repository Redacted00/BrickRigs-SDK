#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BaseCharacter.h"
#include "BrickCarryInfo.h"
#include "BrickEditorObjectID.h"
#include "PlayerViewPoint.h"
#include "RepActuatorState.h"
#include "RestartTransformVersion.h"
#include "VehicleInput.h"
#include "BrickCharacter.generated.h"

class ABrickVehicle;
class AInventoryItem;
class UBrick;
class UFirearmComponent;
class USeatBrick;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ABrickCharacter : public ABaseCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* CurrentItemPrivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentItem, meta=(AllowPrivateAccess=true))
    AInventoryItem* RepCurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* NextItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CarriedBrick, meta=(AllowPrivateAccess=true))
    FBrickCarryInfo CarriedBrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VehicleSeatID, meta=(AllowPrivateAccess=true))
    FBrickEditorObjectID VehicleSeatID;
    
public:
    ABrickCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateVehicleViewRotation(USeatBrick* Seat, int32 PackedView, bool bNewAiming);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateVehicleInput(const FVehicleInput& NewInput, const TArray<FRepActuatorState>& NewActuatorStates, USeatBrick* Seat, const FRestartTransformVersion& RestartVersion, int32 PackedView, bool bNewAiming);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnequipCurrentItem();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerThrowExplosive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerThrowCurrentItem(const FPlayerViewPoint& ViewPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopExtinguish();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartExtinguish();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCurrentItem(AInventoryItem* NewItem);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadItem();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpBrick(UBrick* Brick);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnThrewExplosive(const FPlayerViewPoint& ViewPoint);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnStopAutoFire(UFirearmComponent* FirearmComp, uint8 RoundsFired);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnStartAutoFire(UFirearmComponent* FirearmComp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnSingleFire(UFirearmComponent* FirearmComp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnReplicatedSingleFire(UFirearmComponent* FirearmComp, int32 MuzzlePitchAndYaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnReplicatedAutoFire(UFirearmComponent* FirearmComp, int32 MuzzlePitchAndYaw);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitVehicle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnterVehicle(ABrickVehicle* InVehicle, const FBrickEditorObjectID& InSeatID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropCarriedBrick(const FVector& BrickLocation, const FRotator& BrickRotation, const FVector& BrickVelocity);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCockItem();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleSeatID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentItem(AInventoryItem* PrevItem);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarriedBrick(const FBrickCarryInfo& OldCarriedBrick);
    
};

