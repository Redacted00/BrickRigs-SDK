#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "BasePlayerController.h"
#include "BrickDuration.h"
#include "ClientDamageInfo.h"
#include "EChatContext.h"
#include "EElevatorDirection.h"
#include "EPlayerSpawnResult.h"
#include "EVehiclePinMode.h"
#include "Inventory.h"
#include "KickedPlayerList.h"
#include "KickedPlayerListRequest.h"
#include "MatchSettings.h"
#include "PlayerSpawnRequest.h"
#include "ProjectileHitInfo.h"
#include "RepActuatorState.h"
#include "RepHitInfo.h"
#include "RestartTransformVersion.h"
#include "VehicleSpawnProperties.h"
#include "WinchAttachTarget.h"
#include "BrickPlayerController.generated.h"

class AActor;
class ABaseCharacter;
class ABrickEditor;
class ABrickPlayerState;
class ABrickVehicle;
class ADragStrip;
class AElevator;
class AGravelSilo;
class UAudioComponent;
class UCouplingBrick;
class UDetonatorBrick;
class UInventoryComponent;
class USoundMix;
class USwitchBrick;
class UWinchBrick;

UCLASS(Blueprintable)
class BRICKRIGS_API ABrickPlayerController : public ABasePlayerController, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundMix* AtmosphereSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerCharacter, meta=(AllowPrivateAccess=true))
    ABaseCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpectatedCharacter, meta=(AllowPrivateAccess=true))
    ABaseCharacter* SpectatedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseCharacter* ViewedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickVehicle* PlayerVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickVehicle* ViewedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_AccessedInventory, meta=(AllowPrivateAccess=true))
    UInventoryComponent* AccessedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedInventory, meta=(AllowPrivateAccess=true))
    FInventory ReplicatedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickEditor* BrickEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* EditorEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float FreezeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* HurtAudioComponent;
    
public:
    ABrickPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateActuator(const FRepActuatorState& NewState, const FRestartTransformVersion& RestartVersion);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerDetonatorBrick(UDetonatorBrick* DetonatorBrick);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleInvincible(bool bVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartDragRace(ADragStrip* DragStrip);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpectateNextCharacter(bool bForward);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnDummy(const FVector& Location, uint16 CompressedYaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetVehiclePinMode(EVehiclePinMode PinMode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetSwitchBrickValue(USwitchBrick* SwitchBrick, int8 NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetNextMatchSetting(const FMatchSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetElevatorDirection(AElevator* Elevator, EElevatorDirection Dir);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendChatMessage(EChatContext Context, const FText& Message);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerScrapVehicle(ABrickVehicle* InVehicle, bool bInPerson);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerScrapAllVehicles(bool bIncludeUsed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRevokeKick(const FUniqueNetIdRepl& OtherPlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRestartMatch();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRestartAt(const FPlayerSpawnRequest& SpawnRequest);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetLevel();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestKickedPlayerList(const FKickedPlayerListRequest& Request, uint8 RequestID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestAdminAccess(const FString& PW);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRecoverAllDummies();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPossessCharacter(ABaseCharacter* Char);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOpenGravelSilo(AGravelSilo* Silo, bool bOpen);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnProjectileHit(const FProjectileHitInfo& HitInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnMeleeHit(const FRepHitInfo& HitInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKillCharacter();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKickPlayer(ABrickPlayerState* OtherPlayerState, const FUniqueNetIdRepl& OtherPlayerId, const FString& KickReason, const FBrickDuration& KickDuration);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJoinTeam(const FGenericTeamId& InTeamId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExplodeVehicle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEngageCouplingBrick(UCouplingBrick* CouplingBrick, bool bEngage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyCharacter(ABaseCharacter* Char);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyAllDummies();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCycleVehicles(bool bReverse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCycleCharacters(bool bForward);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatScore(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatMoney(float Amount);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttachWinchBrick(UWinchBrick* WinchBrick, const FWinchAttachTarget& AttachTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyMatchSettings(bool bFadeIn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAccessInventory(UInventoryComponent* InInventory);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void Say(const FText& Message);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RestartMatch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetLevel();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpectatedCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerCharacter(ABaseCharacter* OldCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccessedInventory(UInventoryComponent* OldInventory);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void KillCharacter();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWasKickedForDuration(const FString& KickReason, const FBrickDuration& KickDuration);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSentWrongAdminPassword(uint8 AttemptsRemaining);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveKickedPlayerList(const FKickedPlayerList& PlayerList, uint8 RequestID);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveChatMessage(ABrickPlayerState* Sender, EChatContext Context, const FText& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPlayerLeft(const FString& PlayerName, TEnumAsByte<ETeamAttitude::Type> TeamAttitude, bool bWasKicked);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPlayerJoined(const FString& PlayerName, TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPlayerDied(ABrickPlayerState* Victim, ABrickPlayerState* Killer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnFailedToRestart(EPlayerSpawnResult SpawnResult, const FVehicleSpawnProperties& Props);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDamagedCharacter(const FClientDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdminSay(const FText& Message);
    
    
    // Fix for true pure virtual functions not being implemented
};

