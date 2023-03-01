#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BrickBuilding.h"
#include "BuildingMaterialOverride.h"
#include "BuildingMesh.h"
#include "LegacyBuilding.generated.h"

class UBuildingPart;
class UDestructibleInstancesComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ALegacyBuilding : public ABrickBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleInstancesComponent* DestructibleInstancesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingMesh> BuildingMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingMaterialOverride> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWallsX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWallsY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFloors;
    
public:
    ALegacyBuilding();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnBuildingPart(UBuildingPart* Part);
    
    UFUNCTION(BlueprintCallable)
    void ConstructRoof(UBuildingPart* Part, uint8 RoofGableMesh, uint8 RoofMesh, bool bRotate);
    
    UFUNCTION(BlueprintCallable)
    void ConstructIndustrialRoof(UBuildingPart* Part, uint8 RoofSlopeMesh, uint8 RoofMesh, uint8 WallMesh);
    
    UFUNCTION(BlueprintCallable)
    void ConstructFlatRoof(UBuildingPart* Part, uint8 Mesh);
    
    UFUNCTION(BlueprintCallable)
    UBuildingPart* ConstructBuildingPart(int32 NumX, int32 NumY, int32 Floors, const FVector Location);
    
};

