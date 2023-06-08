#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "BrickConnectionDamageArray.h"
#include "BrickDamageArray.h"
#include "BrickEditorObjectID.h"
#include "BrickPawnInterface.h"
#include "ContactModifyInterface.h"
#include "EVehiclePinMode.h"
#include "ExplosiveInterface.h"
#include "FireInterface.h"
#include "FuelLevel.h"
#include "GenericTeamIdSet.h"
#include "PawnRestartTransform.h"
#include "PhysicsReplicationInterface.h"
#include "RepPhysicsMovement.h"
#include "RestartTransformVersion.h"
#include "SpawnPointInterface.h"
#include "Templates/SubclassOf.h"
#include "UGCFileInfo.h"
#include "ViewTargetInterface.h"
#include "WinchBrickInterface.h"
#include "BrickVehicle.generated.h"

class AActor;
class ABrickPlayerController;
class ABrickPlayerState;
class UAudioComponent;
class UBrick;
class UBrickConnection;
class UBrickVehicleComponent;
class UBrickVehicleStaticInfo;
class UDestructibleInstancesComponent;
class UFirearmComponent;
class UHUDIconComponent;
class UInventoryComponent;
class UMotorBrick;

UCLASS(Blueprintable)
class BRICKRIGS_API ABrickVehicle : public APawn, public IBrickPawnInterface, public IViewTargetInterface, public IGenericTeamAgentInterface, public ISpawnPointInterface, public IFireInterface, public IExplosiveInterface, public IWinchBrickInterface, public IPhysicsReplicationInterface, public IContactModifyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FUGCFileInfo VehicleFileInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RestartTransform, meta=(AllowPrivateAccess=true))
    FPawnRestartTransform RestartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepPhysicsMovement, meta=(AllowPrivateAccess=true))
    FRepPhysicsMovement RepPhysicsMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UGCDownloadProgress, meta=(AllowPrivateAccess=true))
    uint8 UGCDownloadProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABrickPlayerState* SpawningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* OriginalSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickConnection*> BrickConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickConnection*> DynamicBrickConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickConnection*> ExternalBrickConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickConnection*> BrickConnectionsToBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BrickConnectionDamageArray, meta=(AllowPrivateAccess=true))
    FBrickConnectionDamageArray BrickConnectionDamageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BrickDamageArray, meta=(AllowPrivateAccess=true))
    FBrickDamageArray BrickDamageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FuelLevel, meta=(AllowPrivateAccess=true))
    FFuelLevel FuelLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PinMode, meta=(AllowPrivateAccess=true))
    EVehiclePinMode PinMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PassengerTeamIds, meta=(AllowPrivateAccess=true))
    FGenericTeamIdSet PassengerTeamIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBrick* RootBrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> ClusterRootBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> MovementReplicationBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> ClusterRootBricksWithFluidDynamics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> ClusterRootBricksOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> ReplicatedBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> SeatBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> CameraBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectID> GunBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMotorBrick* MotorBrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrickVehicleComponent* VehicleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* HandlingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDIconComponent* HUDIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFirearmComponent*> FirearmComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickVehicleStaticInfo> StaticInfoClass;
    
public:
    ABrickVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateMovement(const FRepPhysicsMovement& Movement, const FRestartTransformVersion& ComparisonIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerOnBrokeDestructibleInstances(UDestructibleInstancesComponent* Comp, const TArray<uint16>& Instances, const FRestartTransformVersion& ComparisonIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExplodeTankBricks(const TArray<FBrickEditorObjectID>& Tanks, const FRestartTransformVersion& ComparisonIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBreakConnections(const FBrickConnectionDamageArray& InDamage, const FRestartTransformVersion& ComparisonIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplySeatCollisionDamage(const FBrickEditorObjectID& SeatID, float DamageAmount, const FRestartTransformVersion& ComparisonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UGCDownloadProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestartTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepPhysicsMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PinMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PassengerTeamIds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelLevel(const FFuelLevel& PrevFuelLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrickDamageArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrickConnectionDamageArray();
    
    UFUNCTION(BlueprintCallable)
    void Interact_ScrapVehicleFromMap(ABrickPlayerController* OtherPC);
    
    UFUNCTION(BlueprintCallable)
    void Interact_ScrapVehicleFromInteraction(ABrickPlayerController* OtherPC);
    
    UFUNCTION(BlueprintCallable)
    void Interact_EnterVehicle(ABrickPlayerController* OtherPC);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleClusters();
    
    
    // Fix for true pure virtual functions not being implemented
};

