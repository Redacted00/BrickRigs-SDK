#pragma once
#include "CoreMinimal.h"
#include "EUGCDepartmentTag.generated.h"

UENUM(BlueprintType)
enum class EUGCDepartmentTag : uint8 {
    None,
    Civil,
    Military,
    Police,
    FireDepartment,
    Max,
};

