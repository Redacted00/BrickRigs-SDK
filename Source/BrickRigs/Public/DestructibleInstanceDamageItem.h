#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DestructibleInstanceDamageItem.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleInstanceDamageItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    BRICKRIGS_API FDestructibleInstanceDamageItem();
};

