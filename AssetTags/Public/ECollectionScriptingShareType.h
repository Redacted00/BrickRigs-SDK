#pragma once
#include "CoreMinimal.h"
#include "ECollectionScriptingShareType.generated.h"

UENUM(BlueprintType)
enum class ECollectionScriptingShareType : uint8 {
    Local,
    Private,
    Shared,
};

