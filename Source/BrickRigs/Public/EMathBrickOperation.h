#pragma once
#include "CoreMinimal.h"
#include "EMathBrickOperation.generated.h"

UENUM(BlueprintType)
enum class EMathBrickOperation : uint8 {
    Add,
    Subtract,
    Multiply,
    Divide,
    Fmod,
    Power,
    Greater,
    Less,
    Min,
    Max,
    MAX_Binary = 0x9,
    Abs,
    Sign,
    Round,
    Ceil,
    Floor,
    Sqrt,
    Sin,
    Asin,
    Cos,
    Acos,
    Tan,
    Atan,
    MAX_Unary = 0x15,
};

