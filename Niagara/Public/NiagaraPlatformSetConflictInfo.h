#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetConflictEntry.h"
#include "NiagaraPlatformSetConflictInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPlatformSetConflictInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetAIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetBIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;
    
    NIAGARA_API FNiagaraPlatformSetConflictInfo();
};

