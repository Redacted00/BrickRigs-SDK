#pragma once
#include "CoreMinimal.h"
#include "LiveLinkControllerBase.h"
#include "LiveLinkTransformControllerData.h"
#include "LiveLinkTransformController.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIVELINKCOMPONENTS_API ULiveLinkTransformController : public ULiveLinkControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkTransformControllerData TransformData;
    
    ULiveLinkTransformController();
};

