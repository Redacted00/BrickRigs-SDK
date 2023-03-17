#pragma once
#include "CoreMinimal.h"
#include "EHostServerType.generated.h"

UENUM(BlueprintType)
enum class EHostServerType : uint8 {
    None,
    Private,
    Public,
};

