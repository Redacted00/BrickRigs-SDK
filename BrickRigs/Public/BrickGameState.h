#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "BrickPropertyInterface.h"
#include "MatchSettings.h"
#include "MatchWinner.h"
#include "BrickGameState.generated.h"

class AActor;
class UBrickTeam;
class ULoadoutInventoryComponent;

UCLASS(Blueprintable)
class BRICKRIGS_API ABrickGameState : public AGameState, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MatchSettings, meta=(AllowPrivateAccess=true))
    FMatchSettings MatchSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NextMatchSettings, meta=(AllowPrivateAccess=true))
    FMatchSettings NextMatchSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 MatchRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickTeam*> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBrickTeam* DefaultTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBrickTeam* ZombieTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBrickTeam* DummyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchWinner, meta=(AllowPrivateAccess=true))
    FMatchWinner MatchWinner;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentRound, meta=(AllowPrivateAccess=true))
    uint16 CurrentRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnPointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULoadoutInventoryComponent* LoadoutInventoryComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitMatchDelay;
    
    ABrickGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NextMatchSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchWinner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRound();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameModeSubLevelLoaded();
    
    
    // Fix for true pure virtual functions not being implemented
};

