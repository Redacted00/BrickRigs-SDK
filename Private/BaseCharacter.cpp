#include "BaseCharacter.h"
#include "Net/UnrealNetwork.h"

void ABaseCharacter::ServerPerformMeleeAction_Implementation() {
}
bool ABaseCharacter::ServerPerformMeleeAction_Validate() {
    return true;
}

void ABaseCharacter::ServerMoveInventoryItems_Implementation(const FMoveInventoryItemParams& Params, const FPlayerViewPoint& ViewPoint) {
}
bool ABaseCharacter::ServerMoveInventoryItems_Validate(const FMoveInventoryItemParams& Params, const FPlayerViewPoint& ViewPoint) {
    return true;
}

void ABaseCharacter::ServerAcknowledgeRestartTransform_Implementation(const FRestartTransformVersion& ComparisonIndex) {
}
bool ABaseCharacter::ServerAcknowledgeRestartTransform_Validate(const FRestartTransformVersion& ComparisonIndex) {
    return true;
}

bool ABaseCharacter::PerformMeleeAction() {
    return false;
}

void ABaseCharacter::OnRep_TeamId() {
}

void ABaseCharacter::OnRep_RestartTransform() {
}

void ABaseCharacter::OnRep_IsOnFire() {
}

void ABaseCharacter::OnRep_CharacterHealth(const FCharacterHealth& OldHealth) {
}

void ABaseCharacter::OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool ABaseCharacter::IsPerformingMeleeAction() {
    return false;
}

bool ABaseCharacter::IsConscious() const {
    return false;
}

void ABaseCharacter::Interact_Possess(ABrickPlayerController* OtherPC) {
}


void ABaseCharacter::ClientOnReceivedDamage_Implementation(const FCharacterDamageInfo& DamageInfo) {
}

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseCharacter, TeamID);
    DOREPLIFETIME(ABaseCharacter, RemoteViewYaw);
    DOREPLIFETIME(ABaseCharacter, bIsAiming);
    DOREPLIFETIME(ABaseCharacter, bIsSprinting);
    DOREPLIFETIME(ABaseCharacter, CharacterHealth);
    DOREPLIFETIME(ABaseCharacter, bIsOnFire);
    DOREPLIFETIME(ABaseCharacter, RestartTransform);
}

ABaseCharacter::ABaseCharacter() {
    this->RemoteViewYaw = 0;
    this->bIsAiming = false;
    this->bIsSprinting = false;
    this->bIsOnFire = false;
    this->FireInstigator = NULL;
    this->Mid = NULL;
    this->InventoryComponent = NULL;
    this->CollisionAC = NULL;
    this->HUDIconComponent = NULL;
    this->InteractionComponent = NULL;
    this->FirePSC = NULL;
    this->FireAC = NULL;
    this->StaticInfoClass = NULL;
}

