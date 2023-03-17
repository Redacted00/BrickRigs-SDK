#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "DestructibleInstanceDamageItem.h"
#include "DestructibleInstanceDamageArray.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleInstanceDamageArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDestructibleInstanceDamageItem> Items;
    
    BRICKRIGS_API FDestructibleInstanceDamageArray();
};

