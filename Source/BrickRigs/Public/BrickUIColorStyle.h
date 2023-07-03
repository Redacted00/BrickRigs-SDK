#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BrickUIColorStyle.generated.h"

USTRUCT(BlueprintType)
struct FBrickUIColorStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colors[13];
    
    BRICKRIGS_API FBrickUIColorStyle();
};

