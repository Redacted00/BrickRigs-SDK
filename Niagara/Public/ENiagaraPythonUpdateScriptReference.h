#pragma once
#include "CoreMinimal.h"
#include "ENiagaraPythonUpdateScriptReference.generated.h"

UENUM(BlueprintType)
enum class ENiagaraPythonUpdateScriptReference : uint8 {
    None,
    ScriptAsset,
    DirectTextEntry,
};

