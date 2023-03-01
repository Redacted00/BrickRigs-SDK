#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkController.generated.h"

UCLASS(Abstract, Blueprintable)
class LIVELINKINTERFACE_API ULiveLinkController : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkController();
};

