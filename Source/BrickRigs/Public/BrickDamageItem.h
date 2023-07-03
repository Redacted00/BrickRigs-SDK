#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BrickDamageItem.generated.h"

USTRUCT(BlueprintType)
struct FBrickDamageItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    BRICKRIGS_API FBrickDamageItem();
};

