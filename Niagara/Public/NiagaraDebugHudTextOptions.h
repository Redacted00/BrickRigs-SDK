#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ENiagaraDebugHudFont.h"
#include "ENiagaraDebugHudHAlign.h"
#include "ENiagaraDebugHudVAlign.h"
#include "NiagaraDebugHudTextOptions.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDebugHudTextOptions {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDebugHudFont Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDebugHudHAlign HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDebugHudVAlign VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScreenOffset;
    
    NIAGARA_API FNiagaraDebugHudTextOptions();
};

