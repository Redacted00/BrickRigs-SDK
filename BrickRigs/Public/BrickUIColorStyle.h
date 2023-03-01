#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BrickUIColorStyle.generated.h"

USTRUCT(BlueprintType)
struct FBrickUIColorStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colors[9];
    
    BRICKRIGS_API FBrickUIColorStyle();
};

