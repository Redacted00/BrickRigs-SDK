#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "EBrickUITextStyle.h"
#include "BrickTextBlock.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIStyleState StyleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUITextStyle TextStyle;
    
public:
    UBrickTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetTextStyle(EBrickUITextStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
};

