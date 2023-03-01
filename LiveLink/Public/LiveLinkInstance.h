#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "Templates/SubclassOf.h"
#include "LiveLinkInstance.generated.h"

class ULiveLinkRetargetAsset;

UCLASS(Blueprintable, NonTransient)
class LIVELINK_API ULiveLinkInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULiveLinkRetargetAsset* CurrentRetargetAsset;
    
public:
    ULiveLinkInstance();
    UFUNCTION(BlueprintCallable)
    void SetSubject(FLiveLinkSubjectName SubjectName);
    
    UFUNCTION(BlueprintCallable)
    void SetRetargetAsset(TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset);
    
};

