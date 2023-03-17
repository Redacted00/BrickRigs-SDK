#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "BrickConnectionDamageItem.generated.h"

USTRUCT(BlueprintType)
struct FBrickConnectionDamageItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    BRICKRIGS_API FBrickConnectionDamageItem();
};

