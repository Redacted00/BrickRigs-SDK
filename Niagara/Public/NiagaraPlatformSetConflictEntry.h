#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetConflictEntry.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPlatformSetConflictEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QualityLevelMask;
    
    NIAGARA_API FNiagaraPlatformSetConflictEntry();
};

