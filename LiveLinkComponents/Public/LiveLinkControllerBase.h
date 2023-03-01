#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkControllerBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class LIVELINKCOMPONENTS_API ULiveLinkControllerBase : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkControllerBase();
};

