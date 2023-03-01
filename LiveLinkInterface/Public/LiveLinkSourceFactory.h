#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkSourceFactory.generated.h"

UCLASS(Abstract, Blueprintable)
class LIVELINKINTERFACE_API ULiveLinkSourceFactory : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkSourceFactory();
};

