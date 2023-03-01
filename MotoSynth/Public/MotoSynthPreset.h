#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MotoSynthRuntimeSettings.h"
#include "MotoSynthPreset.generated.h"

UCLASS(Blueprintable)
class MOTOSYNTH_API UMotoSynthPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotoSynthRuntimeSettings Settings;
    
    UMotoSynthPreset();
};

