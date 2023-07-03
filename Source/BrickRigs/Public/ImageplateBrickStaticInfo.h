#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "EBrickDecalShape.h"
#include "ImageplateBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UImageplateBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickDecalShape ImageplateShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImageMargin;
    
    UImageplateBrickStaticInfo();
};

