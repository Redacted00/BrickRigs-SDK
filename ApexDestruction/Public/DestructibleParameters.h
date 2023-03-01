#pragma once
#include "CoreMinimal.h"
#include "DestructibleAdvancedParameters.h"
#include "DestructibleDamageParameters.h"
#include "DestructibleDebrisParameters.h"
#include "DestructibleDepthParameters.h"
#include "DestructibleParametersFlag.h"
#include "DestructibleSpecialHierarchyDepths.h"
#include "DestructibleParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestructibleDamageParameters DamageParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestructibleDebrisParameters DebrisParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestructibleAdvancedParameters AdvancedParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDestructibleDepthParameters> DepthParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestructibleParametersFlag Flags;
    
    APEXDESTRUCTION_API FDestructibleParameters();
};

