#include "BrickPlayerController.h"
#include "Net/UnrealNetwork.h"

void ABrickPlayerController::ServerUpdateActuator_Implementation(const FRepActuatorState& NewState, const FRestartTransformVersion& RestartVersion) {
}
bool ABrickPlayerController::ServerUpdateActuator_Validate(const FRepActuatorState& NewState, const FRestartTransformVersion& RestartVersion) {
    return true;
}

void ABrickPlayerController::ServerTriggerDetonatorBrick_Implementation(UDetonatorBrick* DetonatorBrick) {
}
bool ABrickPlayerController::ServerTriggerDetonatorBrick_Validate(UDetonatorBrick* DetonatorBrick) {
    return true;
}

void ABrickPlayerController::ServerToggleInvincible_Implementation(bool bVehicle) {
}
bool ABrickPlayerController::ServerToggleInvincible_Validate(bool bVehicle) {
    return true;
}

void ABrickPlayerController::ServerStartDragRace_Implementation(ADragStrip* DragStrip) {
}
bool ABrickPlayerController::ServerStartDragRace_Validate(ADragStrip* DragStrip) {
    return true;
}

void ABrickPlayerController::ServerSpectateNextCharacter_Implementation(bool bForward) {
}
bool ABrickPlayerController::ServerSpectateNextCharacter_Validate(bool bForward) {
    return true;
}

void ABrickPlayerController::ServerSpawnDummy_Implementation(const FVector& Location, uint16 CompressedYaw) {
}
bool ABrickPlayerController::ServerSpawnDummy_Validate(const FVector& Location, uint16 CompressedYaw) {
    return true;
}

void ABrickPlayerController::ServerSetVehiclePinMode_Implementation(EVehiclePinMode PinMode) {
}
bool ABrickPlayerController::ServerSetVehiclePinMode_Validate(EVehiclePinMode PinMode) {
    return true;
}

void ABrickPlayerController::ServerSetSwitchBrickValue_Implementation(USwitchBrick* SwitchBrick, int8 NewValue) {
}
bool ABrickPlayerController::ServerSetSwitchBrickValue_Validate(USwitchBrick* SwitchBrick, int8 NewValue) {
    return true;
}

void ABrickPlayerController::ServerSetElevatorDirection_Implementation(AElevator* Elevator, EElevatorDirection Dir) {
}
bool ABrickPlayerController::ServerSetElevatorDirection_Validate(AElevator* Elevator, EElevatorDirection Dir) {
    return true;
}

void ABrickPlayerController::ServerSendChatMessage_Implementation(EChatContext Context, const FText& Message) {
}
bool ABrickPlayerController::ServerSendChatMessage_Validate(EChatContext Context, const FText& Message) {
    return true;
}

void ABrickPlayerController::ServerScrapVehicle_Implementation(ABrickVehicle* InVehicle, bool bInPerson) {
}
bool ABrickPlayerController::ServerScrapVehicle_Validate(ABrickVehicle* InVehicle, bool bInPerson) {
    return true;
}

void ABrickPlayerController::ServerScrapAllVehicles_Implementation(bool bIncludeUsed) {
}
bool ABrickPlayerController::ServerScrapAllVehicles_Validate(bool bIncludeUsed) {
    return true;
}

void ABrickPlayerController::ServerRevokeKick_Implementation(const FUniqueNetIdRepl& OtherPlayerId) {
}
bool ABrickPlayerController::ServerRevokeKick_Validate(const FUniqueNetIdRepl& OtherPlayerId) {
    return true;
}

void ABrickPlayerController::ServerRestartMatch_Implementation() {
}
bool ABrickPlayerController::ServerRestartMatch_Validate() {
    return true;
}

void ABrickPlayerController::ServerRestartAt_Implementation(const FPlayerSpawnRequest& SpawnRequest) {
}
bool ABrickPlayerController::ServerRestartAt_Validate(const FPlayerSpawnRequest& SpawnRequest) {
    return true;
}

void ABrickPlayerController::ServerResetLevel_Implementation() {
}
bool ABrickPlayerController::ServerResetLevel_Validate() {
    return true;
}

void ABrickPlayerController::ServerRequestKickedPlayerList_Implementation(const FKickedPlayerListRequest& Request, uint8 RequestID) {
}
bool ABrickPlayerController::ServerRequestKickedPlayerList_Validate(const FKickedPlayerListRequest& Request, uint8 RequestID) {
    return true;
}

void ABrickPlayerController::ServerRequestAdminAccess_Implementation(const FString& PW) {
}
bool ABrickPlayerController::ServerRequestAdminAccess_Validate(const FString& PW) {
    return true;
}

void ABrickPlayerController::ServerRecoverAllDummies_Implementation() {
}
bool ABrickPlayerController::ServerRecoverAllDummies_Validate() {
    return true;
}

void ABrickPlayerController::ServerPossessCharacter_Implementation(ABaseCharacter* Char) {
}
bool ABrickPlayerController::ServerPossessCharacter_Validate(ABaseCharacter* Char) {
    return true;
}

void ABrickPlayerController::ServerOpenGravelSilo_Implementation(AGravelSilo* Silo, bool bOpen) {
}
bool ABrickPlayerController::ServerOpenGravelSilo_Validate(AGravelSilo* Silo, bool bOpen) {
    return true;
}

void ABrickPlayerController::ServerOnProjectileHit_Implementation(const FProjectileHitInfo& HitInfo) {
}
bool ABrickPlayerController::ServerOnProjectileHit_Validate(const FProjectileHitInfo& HitInfo) {
    return true;
}

void ABrickPlayerController::ServerOnPlayerChangedMatchSettings_Implementation(const FMatchSettings& NewSettings, bool bNextMatch) {
}
bool ABrickPlayerController::ServerOnPlayerChangedMatchSettings_Validate(const FMatchSettings& NewSettings, bool bNextMatch) {
    return true;
}

void ABrickPlayerController::ServerOnMeleeHit_Implementation(const FRepHitInfo& HitInfo) {
}
bool ABrickPlayerController::ServerOnMeleeHit_Validate(const FRepHitInfo& HitInfo) {
    return true;
}

void ABrickPlayerController::ServerKillCharacter_Implementation() {
}
bool ABrickPlayerController::ServerKillCharacter_Validate() {
    return true;
}

void ABrickPlayerController::ServerKickPlayer_Implementation(const FUniqueNetIdRepl& OtherPlayerId, const FString& KickReason, const FBrickDuration& KickDuration) {
}
bool ABrickPlayerController::ServerKickPlayer_Validate(const FUniqueNetIdRepl& OtherPlayerId, const FString& KickReason, const FBrickDuration& KickDuration) {
    return true;
}

void ABrickPlayerController::ServerJoinTeam_Implementation(const FGenericTeamId& InTeamId) {
}
bool ABrickPlayerController::ServerJoinTeam_Validate(const FGenericTeamId& InTeamId) {
    return true;
}

void ABrickPlayerController::ServerExplodeVehicle_Implementation() {
}
bool ABrickPlayerController::ServerExplodeVehicle_Validate() {
    return true;
}

void ABrickPlayerController::ServerEngageCouplingBrick_Implementation(UCouplingBrick* CouplingBrick, bool bEngage) {
}
bool ABrickPlayerController::ServerEngageCouplingBrick_Validate(UCouplingBrick* CouplingBrick, bool bEngage) {
    return true;
}

void ABrickPlayerController::ServerDestroyCharacter_Implementation(ABaseCharacter* Char) {
}
bool ABrickPlayerController::ServerDestroyCharacter_Validate(ABaseCharacter* Char) {
    return true;
}

void ABrickPlayerController::ServerDestroyAllDummies_Implementation() {
}
bool ABrickPlayerController::ServerDestroyAllDummies_Validate() {
    return true;
}

void ABrickPlayerController::ServerCycleVehicles_Implementation(bool bReverse) {
}
bool ABrickPlayerController::ServerCycleVehicles_Validate(bool bReverse) {
    return true;
}

void ABrickPlayerController::ServerCycleCharacters_Implementation(bool bForward) {
}
bool ABrickPlayerController::ServerCycleCharacters_Validate(bool bForward) {
    return true;
}

void ABrickPlayerController::ServerCheatScore_Implementation(float Amount) {
}
bool ABrickPlayerController::ServerCheatScore_Validate(float Amount) {
    return true;
}

void ABrickPlayerController::ServerCheatMoney_Implementation(float Amount) {
}
bool ABrickPlayerController::ServerCheatMoney_Validate(float Amount) {
    return true;
}

void ABrickPlayerController::ServerAttachWinchBrick_Implementation(UWinchBrick* WinchBrick, const FWinchAttachTarget& AttachTarget) {
}
bool ABrickPlayerController::ServerAttachWinchBrick_Validate(UWinchBrick* WinchBrick, const FWinchAttachTarget& AttachTarget) {
    return true;
}

void ABrickPlayerController::ServerAccessInventory_Implementation(UInventoryComponent* InInventory) {
}
bool ABrickPlayerController::ServerAccessInventory_Validate(UInventoryComponent* InInventory) {
    return true;
}

void ABrickPlayerController::Say(const FText& Message) {
}

void ABrickPlayerController::RestartMatch() {
}

void ABrickPlayerController::ResetLevel() {
}

void ABrickPlayerController::OnRep_SpectatedCharacter() {
}

void ABrickPlayerController::OnRep_ReplicatedInventory() {
}

void ABrickPlayerController::OnRep_PlayerCharacter(ABaseCharacter* OldCharacter) {
}

void ABrickPlayerController::OnRep_AccessedInventory(UInventoryComponent* OldInventory) {
}

void ABrickPlayerController::KillCharacter() {
}

void ABrickPlayerController::ClientWasKickedForDuration_Implementation(const FString& KickReason, const FBrickDuration& KickDuration) {
}

void ABrickPlayerController::ClientSentWrongAdminPassword_Implementation(uint8 AttemptsRemaining) {
}

void ABrickPlayerController::ClientReceiveKickedPlayerList_Implementation(const FKickedPlayerList& PlayerList, uint8 RequestID) {
}

void ABrickPlayerController::ClientReceiveChatMessages_Implementation(const TArray<FBrickChatMessage>& ChatMessages) {
}

void ABrickPlayerController::ClientReceiveChatMessage_Implementation(const FBrickChatMessage& ChatMessage) {
}

void ABrickPlayerController::ClientOnFailedToRestart_Implementation(EPlayerSpawnResult SpawnResult, const FVehicleSpawnProperties& Props) {
}

void ABrickPlayerController::ClientDamagedCharacter_Implementation(const FClientDamageInfo& DamageInfo) {
}

void ABrickPlayerController::AdminSay(const FText& Message) {
}

void ABrickPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrickPlayerController, PlayerCharacter);
    DOREPLIFETIME(ABrickPlayerController, SpectatedCharacter);
    DOREPLIFETIME(ABrickPlayerController, AccessedInventory);
    DOREPLIFETIME(ABrickPlayerController, ReplicatedInventory);
    DOREPLIFETIME(ABrickPlayerController, FreezeTime);
}

ABrickPlayerController::ABrickPlayerController() {
    this->AtmosphereSoundMix = NULL;
    this->PlayerCharacter = NULL;
    this->SpectatedCharacter = NULL;
    this->ViewedCharacter = NULL;
    this->PlayerVehicle = NULL;
    this->ViewedVehicle = NULL;
    this->AccessedInventory = NULL;
    this->BrickEditor = NULL;
    this->EditorEntryPoint = NULL;
    this->FreezeTime = 0.00f;
    this->HurtAudioComponent = NULL;
}

