#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "BrickPlayerState.generated.h"

class ABaseCharacter;

UCLASS(Blueprintable)
class BRICKRIGS_API ABrickPlayerState : public APlayerState, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseCharacter* InactiveCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAdmin, meta=(AllowPrivateAccess=true))
    bool bIsAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamId, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsTeamLeader, meta=(AllowPrivateAccess=true))
    bool bIsTeamLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Money, meta=(AllowPrivateAccess=true))
    float Money;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Kills, meta=(AllowPrivateAccess=true))
    uint16 Kills;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Deaths, meta=(AllowPrivateAccess=true))
    uint16 Deaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAlive, meta=(AllowPrivateAccess=true))
    bool bIsAlive;
    
public:
    ABrickPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Money(float PrevValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Kills();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTeamLeader();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAlive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAdmin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Deaths();
    
    
    // Fix for true pure virtual functions not being implemented
};

