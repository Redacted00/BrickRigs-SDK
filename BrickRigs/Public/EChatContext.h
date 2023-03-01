#pragma once
#include "CoreMinimal.h"
#include "EChatContext.generated.h"

UENUM(BlueprintType)
enum class EChatContext : uint8 {
    None,
    Global,
    Team,
    Local,
    Admin,
    Max,
};

