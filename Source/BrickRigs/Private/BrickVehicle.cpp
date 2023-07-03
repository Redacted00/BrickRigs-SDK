#include "BrickVehicle.h"
#include "BrickVehicleComponent.h"
#include "Net/UnrealNetwork.h"

void ABrickVehicle::ServerUpdateMovement_Implementation(const FRepPhysicsMovement& Movement, const FRestartTransformVersion& ComparisonIndex) {
}
bool ABrickVehicle::ServerUpdateMovement_Validate(const FRepPhysicsMovement& Movement, const FRestartTransformVersion& ComparisonIndex) {
    return true;
}

void ABrickVehicle::ServerOnBrokeDestructibleInstances_Implementation(UDestructibleInstancesComponent* Comp, const TArray<uint16>& Instances, const FRestartTransformVersion& ComparisonIndex) {
}
bool ABrickVehicle::ServerOnBrokeDestructibleInstances_Validate(UDestructibleInstancesComponent* Comp, const TArray<uint16>& Instances, const FRestartTransformVersion& ComparisonIndex) {
    return true;
}

void ABrickVehicle::ServerExplodeTankBricks_Implementation(const TArray<FBrickEditorObjectID>& Tanks, const FRestartTransformVersion& ComparisonIndex) {
}
bool ABrickVehicle::ServerExplodeTankBricks_Validate(const TArray<FBrickEditorObjectID>& Tanks, const FRestartTransformVersion& ComparisonIndex) {
    return true;
}

void ABrickVehicle::ServerBreakConnections_Implementation(const FBrickConnectionDamageArray& InDamage, const FRestartTransformVersion& ComparisonIndex) {
}
bool ABrickVehicle::ServerBreakConnections_Validate(const FBrickConnectionDamageArray& InDamage, const FRestartTransformVersion& ComparisonIndex) {
    return true;
}

void ABrickVehicle::ServerApplySeatCollisionDamage_Implementation(const FBrickEditorObjectID& SeatID, float DamageAmount, const FRestartTransformVersion& ComparisonIndex) {
}
bool ABrickVehicle::ServerApplySeatCollisionDamage_Validate(const FBrickEditorObjectID& SeatID, float DamageAmount, const FRestartTransformVersion& ComparisonIndex) {
    return true;
}

void ABrickVehicle::OnRep_UGCDownloadProgress() {
}

void ABrickVehicle::OnRep_RestartTransform() {
}

void ABrickVehicle::OnRep_RepPhysicsMovement() {
}

void ABrickVehicle::OnRep_PinMode() {
}

void ABrickVehicle::OnRep_PassengerTeamIds() {
}

void ABrickVehicle::OnRep_FuelLevel(const FFuelLevel& PrevFuelLevel) {
}

void ABrickVehicle::OnRep_BrickDamageArray() {
}

void ABrickVehicle::OnRep_BrickConnectionDamageArray() {
}

void ABrickVehicle::Interact_ScrapVehicleFromMap(ABrickPlayerController* OtherPC) {
}

void ABrickVehicle::Interact_ScrapVehicleFromInteraction(ABrickPlayerController* OtherPC) {
}

void ABrickVehicle::Interact_EnterVehicle(ABrickPlayerController* OtherPC) {
}

void ABrickVehicle::DebugVehicleClusters() {
}

void ABrickVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrickVehicle, VehicleFileInfo);
    DOREPLIFETIME(ABrickVehicle, RestartTransform);
    DOREPLIFETIME(ABrickVehicle, RepPhysicsMovement);
    DOREPLIFETIME(ABrickVehicle, UGCDownloadProgress);
    DOREPLIFETIME(ABrickVehicle, SpawningPlayerState);
    DOREPLIFETIME(ABrickVehicle, OriginalSpawnPoint);
    DOREPLIFETIME(ABrickVehicle, BrickConnectionDamageArray);
    DOREPLIFETIME(ABrickVehicle, BrickDamageArray);
    DOREPLIFETIME(ABrickVehicle, FuelLevel);
    DOREPLIFETIME(ABrickVehicle, PinMode);
    DOREPLIFETIME(ABrickVehicle, PassengerTeamIds);
}

ABrickVehicle::ABrickVehicle() {
    this->UGCDownloadProgress = 0;
    this->SpawningPlayerState = NULL;
    this->OriginalSpawnPoint = NULL;
    this->PinMode = EVehiclePinMode::None;
    this->RootBrick = NULL;
    this->MotorBrick = NULL;
    this->VehicleComponent = CreateDefaultSubobject<UBrickVehicleComponent>(TEXT("VehicleComponent"));
    this->HandlingAudioComponent = NULL;
    this->HUDIconComponent = NULL;
    this->InventoryComponent = NULL;
    this->StaticInfoClass = NULL;
}

