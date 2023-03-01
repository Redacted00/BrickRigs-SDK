#include "WaterBody.h"
#include "WaterSplineComponent.h"
#include "WaterSplineMetadata.h"

class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UWaterWavesBase;

void AWaterBody::SetWaterWaves(UWaterWavesBase* InWaterWaves) {
}

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged) {
}

UWaterSplineComponent* AWaterBody::GetWaterSpline() const {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance() {
    return NULL;
}

UMaterialInterface* AWaterBody::GetWaterMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetUnderwaterPostProcessMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance() {
    return NULL;
}

float AWaterBody::GetMaxWaveHeight() const {
    return 0.0f;
}

TArray<AWaterBodyIsland*> AWaterBody::GetIslands() const {
    return TArray<AWaterBodyIsland*>();
}

TArray<AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes() const {
    return TArray<AWaterBodyExclusionVolume*>();
}

AWaterBody::AWaterBody() {
    this->PhysicalMaterial = NULL;
    this->TargetWaveMaskDepth = 2048.00f;
    this->MaxWaveHeightOffset = 0.00f;
    this->WaterBodyIndex = -1;
    this->bFillCollisionUnderWaterBodiesForNavmesh = false;
    this->WaterBodyType = EWaterBodyType::River;
    this->WaterMaterial = NULL;
    this->UnderwaterPostProcessMaterial = NULL;
    this->bAffectsLandscape = true;
    this->bGenerateCollisions = true;
    this->bOverrideWaterMesh = false;
    this->WaterMeshOverride = NULL;
    this->OverlapMaterialPriority = 0;
    this->CollisionProfileName = TEXT("WaterBodyCollision");
    this->SplineComp = CreateDefaultSubobject<UWaterSplineComponent>(TEXT("WaterSpline"));
    this->WaterSplineMetadata = CreateDefaultSubobject<UWaterSplineMetadata>(TEXT("WaterSplineMetadata"));
    this->WaterMID = NULL;
    this->UnderwaterPostProcessMID = NULL;
    this->bCanAffectNavigation = false;
    this->WaterNavAreaClass = NULL;
    this->WaterWaves = NULL;
}

