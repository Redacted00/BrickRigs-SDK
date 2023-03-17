#pragma once
#include "CoreMinimal.h"
#include "MainWidgetBase.h"
#include "IntroSequenceWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UIntroSequenceWidget : public UMainWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSequences;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowDuration;
    
    UIntroSequenceWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSequence(int32 SequenceIndex);
    
};

