#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DragRaceLane.h"
#include "EDragRaceState.h"
#include "DragStrip.generated.h"

class ABrickPlayerController;
class ARaceTimer;
class UInteractionComponent;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ADragStrip : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RaceState, meta=(AllowPrivateAccess=true))
    EDragRaceState RaceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LeftLaneState, meta=(AllowPrivateAccess=true))
    FDragRaceLane LeftLaneState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RightLaneState, meta=(AllowPrivateAccess=true))
    FDragRaceLane RightLaneState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TreeMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FinishLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TrackBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTreeLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerLightDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaceTimer* RaceTimerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaceTimer* RaceTimerLeft;
    
    ADragStrip();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RightLaneState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RaceState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LeftLaneState();
    
private:
    UFUNCTION(BlueprintCallable)
    void Interact_StartRace(ABrickPlayerController* PC);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetInteractionLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* CreateTreeMID();
    
};

