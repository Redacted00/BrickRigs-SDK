#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraModuleDependencyType : uint8 {
    PreDependency,
    PostDependency,
};

