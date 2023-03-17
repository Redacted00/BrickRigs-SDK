#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "BrickDamageItem.generated.h"

USTRUCT(BlueprintType)
struct FBrickDamageItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    BRICKRIGS_API FBrickDamageItem();
};

