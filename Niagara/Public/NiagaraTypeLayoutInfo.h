#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraTypeLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> FloatComponentByteOffsets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> FloatComponentRegisterOffsets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Int32ComponentByteOffsets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Int32ComponentRegisterOffsets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> HalfComponentByteOffsets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> HalfComponentRegisterOffsets;
    
    NIAGARA_API FNiagaraTypeLayoutInfo();
};

