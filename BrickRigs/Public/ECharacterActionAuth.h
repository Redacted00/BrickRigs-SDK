#pragma once
#include "CoreMinimal.h"
#include "ECharacterActionAuth.generated.h"

UENUM(BlueprintType)
enum class ECharacterActionAuth : uint8 {
    Local,
    ClientAuth,
    ServerAuth,
};

