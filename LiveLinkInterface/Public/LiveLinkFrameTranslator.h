#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkFrameTranslator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class LIVELINKINTERFACE_API ULiveLinkFrameTranslator : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkFrameTranslator();
};

