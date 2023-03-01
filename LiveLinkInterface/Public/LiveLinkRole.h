#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkRole.generated.h"

UCLASS(Abstract, Blueprintable)
class LIVELINKINTERFACE_API ULiveLinkRole : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkRole();
};

