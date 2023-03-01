#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessCopyType.generated.h"

UENUM(BlueprintType)
enum class EPropertyAccessCopyType : uint8 {
    None,
    Plain,
    Complex,
    Bool,
    Struct,
    Object,
    Name,
    Array,
    PromoteBoolToByte,
    PromoteBoolToInt32,
    PromoteBoolToInt64,
    PromoteBoolToFloat,
    PromoteByteToInt32,
    PromoteByteToInt64,
    PromoteByteToFloat,
    PromoteInt32ToInt64,
    PromoteInt32ToFloat,
};

