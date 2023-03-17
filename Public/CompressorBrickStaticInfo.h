#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "CompressorBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UCompressorBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostFactor;
    
    UCompressorBrickStaticInfo();
};

