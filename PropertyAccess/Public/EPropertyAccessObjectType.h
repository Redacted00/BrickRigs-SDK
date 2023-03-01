#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessObjectType.generated.h"

UENUM(BlueprintType)
enum class EPropertyAccessObjectType : uint8 {
    None,
    Object,
    WeakObject,
    SoftObject,
};

