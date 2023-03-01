#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "OnCameraUnderwaterStateChangedDelegate.h"
#include "OnWaterScalabilityChangedDelegate.h"
#include "WaterSubsystem.generated.h"

class ABuoyancyManager;
class AWaterMeshActor;
class UMaterialParameterCollection;
class UStaticMesh;

UCLASS(Blueprintable, Transient)
class WATER_API UWaterSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuoyancyManager* BuoyancyManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraUnderwaterStateChanged OnCameraUnderwaterStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaterScalabilityChanged OnWaterScalabilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultRiverMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultLakeMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterMeshActor* WaterMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
public:
    UWaterSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetOceanFloodHeight(float InFloodHeight);
    
    UFUNCTION(BlueprintCallable)
    void PrintToWaterLog(const FString& Message, bool bWarning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaterRenderingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderwaterPostProcessEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShallowWaterSimulationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmoothedWorldTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterSimulationRenderTargetSize();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterMaxImpulseForces();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterMaxDynamicForces();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOceanTotalHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOceanFloodHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOceanBaseHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraUnderwaterDepth() const;
    
};

