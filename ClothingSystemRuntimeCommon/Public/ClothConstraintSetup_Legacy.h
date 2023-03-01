#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetup_Legacy.generated.h"

USTRUCT(BlueprintType)
struct FClothConstraintSetup_Legacy {
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
    
    CLOTHINGSYSTEMRUNTIMECOMMON_API FClothConstraintSetup_Legacy();
};

