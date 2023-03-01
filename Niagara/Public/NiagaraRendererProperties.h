#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraMergeable -FallbackName=NiagaraMergeable
#include "ENiagaraRendererMotionVectorSetting.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraRendererProperties.generated.h"

UCLASS(Abstract, Blueprintable)
class NIAGARA_API UNiagaraRendererProperties : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortOrderHint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraRendererMotionVectorSetting MotionVectorSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionBlurEnabled;
    
public:
    UNiagaraRendererProperties();
};

