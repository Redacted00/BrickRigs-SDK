#pragma once
#include "CoreMinimal.h"
#include "BuildingMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBuildingMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FromMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ToMaterial;
    
    BRICKRIGS_API FBuildingMaterialOverride();
};

