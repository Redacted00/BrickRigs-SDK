#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkFramePreProcessor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class LIVELINKINTERFACE_API ULiveLinkFramePreProcessor : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkFramePreProcessor();
};

