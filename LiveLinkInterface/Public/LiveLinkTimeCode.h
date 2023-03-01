#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTimeCode_Base_DEPRECATED.h"
#include "LiveLinkTimeCode.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED {
    GENERATED_BODY()
public:
    LIVELINKINTERFACE_API FLiveLinkTimeCode();
};

