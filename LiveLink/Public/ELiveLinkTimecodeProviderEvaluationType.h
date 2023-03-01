#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkTimecodeProviderEvaluationType.generated.h"

UENUM()
enum class ELiveLinkTimecodeProviderEvaluationType : int32 {
    Lerp,
    Nearest,
    Latest,
};

