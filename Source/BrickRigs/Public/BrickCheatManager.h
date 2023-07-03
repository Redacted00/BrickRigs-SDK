#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "BrickPropertyInterface.h"
#include "UGCFileInfo.h"
#include "BrickCheatManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class BRICKRIGS_API UBrickCheatManager : public UCheatManager, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowStatUnit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGodMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCFileInfo VehicleToSpawn;
    
    UBrickCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void SetTargetOnFire();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSpectate();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddScore(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMoney(float Amount);
    
    
    // Fix for true pure virtual functions not being implemented
};

