#pragma once
#include "CoreMinimal.h"
#include "EVectorVMOperandLocation.generated.h"

UENUM(BlueprintType)
enum class EVectorVMOperandLocation : uint8 {
    Register,
    Constant,
    Num,
};

