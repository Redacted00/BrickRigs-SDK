#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "BrickPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BRICKRIGS_API UBrickPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flammability;
    
    UBrickPhysicalMaterial();
};

