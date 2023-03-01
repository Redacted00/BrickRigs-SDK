#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimecodeProvider -FallbackName=TimecodeProvider
#include "GenlockedTimecodeProvider.generated.h"

UCLASS(Abstract, Blueprintable)
class TIMEMANAGEMENT_API UGenlockedTimecodeProvider : public UTimecodeProvider {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGenlockToCount;
    
    UGenlockedTimecodeProvider();
};

