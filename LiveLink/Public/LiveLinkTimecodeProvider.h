#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimecodeProvider -FallbackName=TimecodeProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectKey -FallbackName=LiveLinkSubjectKey
#include "ELiveLinkTimecodeProviderEvaluationType.h"
#include "LiveLinkTimecodeProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIVELINK_API ULiveLinkTimecodeProvider : public UTimecodeProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectKey SubjectKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkTimecodeProviderEvaluationType Evaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate OverrideFrameRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufferSize;
    
public:
    ULiveLinkTimecodeProvider();
};

