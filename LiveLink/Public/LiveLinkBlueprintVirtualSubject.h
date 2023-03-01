#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkBaseFrameData -FallbackName=LiveLinkBaseFrameData
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkBaseStaticData -FallbackName=LiveLinkBaseStaticData
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkVirtualSubject -FallbackName=LiveLinkVirtualSubject
#include "LiveLinkBlueprintVirtualSubject.generated.h"

UCLASS(Abstract, Blueprintable)
class LIVELINK_API ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject {
    GENERATED_BODY()
public:
    ULiveLinkBlueprintVirtualSubject();
    UFUNCTION(BlueprintCallable)
    bool UpdateVirtualSubjectStaticData_Internal(const FLiveLinkBaseStaticData& InStruct);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateVirtualSubjectFrameData_Internal(const FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
};

