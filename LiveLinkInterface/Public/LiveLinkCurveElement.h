#pragma once
#include "CoreMinimal.h"
#include "LiveLinkCurveElement.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkCurveElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveValue;
    
    LIVELINKINTERFACE_API FLiveLinkCurveElement();
};

