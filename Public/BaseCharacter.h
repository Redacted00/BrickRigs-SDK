#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "BrickPawnInterface.h"
#include "CharacterDamageInfo.h"
#include "CharacterHealth.h"
#include "FireInterface.h"
#include "MoveInventoryItemParams.h"
#include "PawnRestartTransform.h"
#include "PlayerViewPoint.h"
#include "RestartTransformVersion.h"
#include "Templates/SubclassOf.h"
#include "ViewTargetInterface.h"
#include "BaseCharacter.generated.h"

class AActor;
class ABrickPlayerController;
class APawn;
class UAudioComponent;
class UCharacterAction;
class UCharacterInventoryComponent;
class UCharacterStaticInfo;
class UHUDIconComponent;
class UInteractionComponent;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ABaseCharacter : public ACharacter, public IBrickPawnInterface, public IViewTargetInterface, public IGenericTeamAgentInterface, public IFireInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamId, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 RemoteViewYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAiming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharacterHealth, meta=(AllowPrivateAccess=true))
    FCharacterHealth CharacterHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsOnFire, meta=(AllowPrivateAccess=true))
    bool bIsOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* FireInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCharacterAction*> ActiveActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RestartTransform, meta=(AllowPrivateAccess=true))
    FPawnRestartTransform RestartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> FootstepACs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> FoleyACs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* CollisionAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDIconComponent* HUDIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FirePSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* FireAC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCharacterStaticInfo> StaticInfoClass;
    
    ABaseCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformMeleeAction();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveInventoryItems(const FMoveInventoryItemParams& Params, const FPlayerViewPoint& ViewPoint);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAcknowledgeRestartTransform(const FRestartTransformVersion& ComparisonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PerformMeleeAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestartTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOnFire();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterHealth(const FCharacterHealth& OldHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformingMeleeAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConscious() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Interact_Possess(ABrickPlayerController* OtherPC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void GiveTestLoadout();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnReceivedDamage(const FCharacterDamageInfo& DamageInfo);
    
    
    // Fix for true pure virtual functions not being implemented
};

