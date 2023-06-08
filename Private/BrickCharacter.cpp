#include "BrickCharacter.h"
#include "Net/UnrealNetwork.h"

void ABrickCharacter::ServerUpdateVehicleViewRotation_Implementation(USeatBrick* Seat, int32 PackedView, bool bNewAiming) {
}
bool ABrickCharacter::ServerUpdateVehicleViewRotation_Validate(USeatBrick* Seat, int32 PackedView, bool bNewAiming) {
    return true;
}

void ABrickCharacter::ServerUpdateVehicleInput_Implementation(const FVehicleInput& NewInput, const TArray<FRepActuatorState>& NewActuatorStates, USeatBrick* Seat, const FRestartTransformVersion& RestartVersion, int32 PackedView, bool bNewAiming) {
}
bool ABrickCharacter::ServerUpdateVehicleInput_Validate(const FVehicleInput& NewInput, const TArray<FRepActuatorState>& NewActuatorStates, USeatBrick* Seat, const FRestartTransformVersion& RestartVersion, int32 PackedView, bool bNewAiming) {
    return true;
}

void ABrickCharacter::ServerUnequipCurrentItem_Implementation() {
}
bool ABrickCharacter::ServerUnequipCurrentItem_Validate() {
    return true;
}

void ABrickCharacter::ServerThrowExplosive_Implementation() {
}
bool ABrickCharacter::ServerThrowExplosive_Validate() {
    return true;
}

void ABrickCharacter::ServerThrowCurrentItem_Implementation(const FPlayerViewPoint& ViewPoint) {
}
bool ABrickCharacter::ServerThrowCurrentItem_Validate(const FPlayerViewPoint& ViewPoint) {
    return true;
}

void ABrickCharacter::ServerStopExtinguish_Implementation() {
}
bool ABrickCharacter::ServerStopExtinguish_Validate() {
    return true;
}

void ABrickCharacter::ServerStartExtinguish_Implementation() {
}
bool ABrickCharacter::ServerStartExtinguish_Validate() {
    return true;
}

void ABrickCharacter::ServerSetCurrentItem_Implementation(AInventoryItem* NewItem) {
}
bool ABrickCharacter::ServerSetCurrentItem_Validate(AInventoryItem* NewItem) {
    return true;
}

void ABrickCharacter::ServerReloadItem_Implementation() {
}
bool ABrickCharacter::ServerReloadItem_Validate() {
    return true;
}

void ABrickCharacter::ServerPickUpBrick_Implementation(UBrick* Brick) {
}
bool ABrickCharacter::ServerPickUpBrick_Validate(UBrick* Brick) {
    return true;
}

void ABrickCharacter::ServerOnThrewExplosive_Implementation(const FPlayerViewPoint& ViewPoint) {
}
bool ABrickCharacter::ServerOnThrewExplosive_Validate(const FPlayerViewPoint& ViewPoint) {
    return true;
}

void ABrickCharacter::ServerOnStopAutoFire_Implementation(UFirearmComponent* FirearmComp, uint8 RoundsFired) {
}
bool ABrickCharacter::ServerOnStopAutoFire_Validate(UFirearmComponent* FirearmComp, uint8 RoundsFired) {
    return true;
}

void ABrickCharacter::ServerOnStartAutoFire_Implementation(UFirearmComponent* FirearmComp) {
}
bool ABrickCharacter::ServerOnStartAutoFire_Validate(UFirearmComponent* FirearmComp) {
    return true;
}

void ABrickCharacter::ServerOnSingleFire_Implementation(UFirearmComponent* FirearmComp) {
}
bool ABrickCharacter::ServerOnSingleFire_Validate(UFirearmComponent* FirearmComp) {
    return true;
}

void ABrickCharacter::ServerOnReplicatedSingleFire_Implementation(UFirearmComponent* FirearmComp, int32 MuzzlePitchAndYaw) {
}
bool ABrickCharacter::ServerOnReplicatedSingleFire_Validate(UFirearmComponent* FirearmComp, int32 MuzzlePitchAndYaw) {
    return true;
}

void ABrickCharacter::ServerOnReplicatedAutoFire_Implementation(UFirearmComponent* FirearmComp, int32 MuzzlePitchAndYaw) {
}
bool ABrickCharacter::ServerOnReplicatedAutoFire_Validate(UFirearmComponent* FirearmComp, int32 MuzzlePitchAndYaw) {
    return true;
}

void ABrickCharacter::ServerExitVehicle_Implementation() {
}
bool ABrickCharacter::ServerExitVehicle_Validate() {
    return true;
}

void ABrickCharacter::ServerEnterVehicle_Implementation(ABrickVehicle* InVehicle, const FBrickEditorObjectID& InSeatID) {
}
bool ABrickCharacter::ServerEnterVehicle_Validate(ABrickVehicle* InVehicle, const FBrickEditorObjectID& InSeatID) {
    return true;
}

void ABrickCharacter::ServerDropCarriedBrick_Implementation(const FVector& BrickLocation, const FRotator& BrickRotation, const FVector& BrickVelocity) {
}
bool ABrickCharacter::ServerDropCarriedBrick_Validate(const FVector& BrickLocation, const FRotator& BrickRotation, const FVector& BrickVelocity) {
    return true;
}

void ABrickCharacter::ServerCockItem_Implementation() {
}
bool ABrickCharacter::ServerCockItem_Validate() {
    return true;
}

void ABrickCharacter::OnRep_VehicleSeatID() {
}

void ABrickCharacter::OnRep_CurrentItem(AInventoryItem* PrevItem) {
}

void ABrickCharacter::OnRep_CarriedBrick(const FBrickCarryInfo& OldCarriedBrick) {
}

void ABrickCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrickCharacter, RepCurrentItem);
    DOREPLIFETIME(ABrickCharacter, CarriedBrick);
    DOREPLIFETIME(ABrickCharacter, VehicleSeatID);
}

ABrickCharacter::ABrickCharacter() {
    this->CurrentItemPrivate = NULL;
    this->RepCurrentItem = NULL;
    this->NextItem = NULL;
}

