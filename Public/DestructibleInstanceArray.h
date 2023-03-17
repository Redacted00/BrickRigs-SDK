#pragma once
#include "CoreMinimal.h"
#include "DestructibleInstance.h"
#include "DestructibleInstanceArray.generated.h"

class UDestructibleInstanceTemplate;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDestructibleInstanceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDestructibleInstanceTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDestructibleInstance> Instances;
    
    BRICKRIGS_API FDestructibleInstanceArray();
};

