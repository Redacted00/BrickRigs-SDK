#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "BrickUIBrushStyle.generated.h"

USTRUCT(BlueprintType)
struct FBrickUIBrushStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brushes[13];
    
    BRICKRIGS_API FBrickUIBrushStyle();
};

