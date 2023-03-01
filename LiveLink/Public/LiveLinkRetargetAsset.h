#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkRetargetAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class LIVELINK_API ULiveLinkRetargetAsset : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkRetargetAsset();
};

