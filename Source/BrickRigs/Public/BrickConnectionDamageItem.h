#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BrickConnectionDamageItem.generated.h"

USTRUCT(BlueprintType)
struct FBrickConnectionDamageItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    BRICKRIGS_API FBrickConnectionDamageItem();
};

