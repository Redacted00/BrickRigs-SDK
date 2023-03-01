#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetupNv.generated.h"

USTRUCT(BlueprintType)
struct FClothConstraintSetupNv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StiffnessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StretchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressionLimit;
    
    CLOTHINGSYSTEMRUNTIMENV_API FClothConstraintSetupNv();
};

