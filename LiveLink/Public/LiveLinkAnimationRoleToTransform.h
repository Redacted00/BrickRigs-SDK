#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkFrameTranslator -FallbackName=LiveLinkFrameTranslator
#include "LiveLinkAnimationRoleToTransform.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIVELINK_API ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    ULiveLinkAnimationRoleToTransform();
};

