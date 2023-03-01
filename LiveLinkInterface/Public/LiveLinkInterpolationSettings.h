#pragma once
#include "CoreMinimal.h"
#include "LiveLinkInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationOffset;
    
    LIVELINKINTERFACE_API FLiveLinkInterpolationSettings();
};

