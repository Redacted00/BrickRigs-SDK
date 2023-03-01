#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraDebugHUDSettingsData.h"
#include "NiagaraDebugHUDSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=EditorPerProjectUserSettings)
class NIAGARA_API UNiagaraDebugHUDSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDebugHUDSettingsData Data;
    
    UNiagaraDebugHUDSettings();
};

