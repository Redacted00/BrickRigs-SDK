#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "DestructibleInstanceDamageItem.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleInstanceDamageItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    BRICKRIGS_API FDestructibleInstanceDamageItem();
};

