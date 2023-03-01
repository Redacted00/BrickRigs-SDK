#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavRelevantInterface -FallbackName=NavRelevantInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "EWaterBodyType.h"
#include "Templates/SubclassOf.h"
#include "UnderwaterPostProcessSettings.h"
#include "WaterBrushActorInterface.h"
#include "WaterCurveSettings.h"
#include "WaterBody.generated.h"

class ALandscapeProxy;
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNavAreaBase;
class UPhysicalMaterial;
class UStaticMesh;
class UWaterSplineComponent;
class UWaterSplineMetadata;
class UWaterWavesBase;

UCLASS(Abstract, Blueprintable)
class WATER_API AWaterBody : public AActor, public INavRelevantInterface, public IWaterBrushActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWaveMaskDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaveHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    int32 WaterBodyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillCollisionUnderWaterBodiesForNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnderwaterPostProcessSettings UnderwaterPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterBodyType WaterBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterCurveSettings CurveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WaterMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UnderwaterPostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateCollisions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWaterMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WaterMeshOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverlapMaterialPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterSplineComponent* SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterSplineMetadata* WaterSplineMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WaterMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* UnderwaterPostProcessMID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TLazyObjectPtr<AWaterBodyIsland>> Islands;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TLazyObjectPtr<AWaterBodyExclusionVolume>> ExclusionVolumes;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALandscapeProxy> Landscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPostProcessSettings CurrentPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAffectNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> WaterNavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterWavesBase* WaterWaves;
    
public:
    AWaterBody();
    UFUNCTION(BlueprintCallable)
    void SetWaterWaves(UWaterWavesBase* InWaterWaves);
    
    UFUNCTION(BlueprintCallable)
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetWaterMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxWaveHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWaterBodyIsland*> GetIslands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

