#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
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

