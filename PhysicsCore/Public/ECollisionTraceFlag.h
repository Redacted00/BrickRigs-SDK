#pragma once
#include "CoreMinimal.h"
#include "ECollisionTraceFlag.generated.h"

UENUM(BlueprintType)
enum ECollisionTraceFlag {
    CTF_UseDefault,
    CTF_UseSimpleAndComplex,
    CTF_UseSimpleAsComplex,
    CTF_UseComplexAsSimple,
    CTF_MAX UMETA(Hidden),
};

