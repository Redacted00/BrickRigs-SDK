#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InventoryLoadout.h"
#include "BrickTeam.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickTeam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Score, meta=(AllowPrivateAccess=true))
    uint16 Score;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_MaxScore, meta=(AllowPrivateAccess=true))
    uint16 MaxScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BadgeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TeamColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryLoadout DefaultLoadout;
    
    UBrickTeam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Score();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxScore();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTeamDisplayName() const;
    
};

