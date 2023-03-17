#pragma once
#include "CoreMinimal.h"
#include "PopupParams.h"
#include "MessagePopupParams.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UMessagePopupParams : public UPopupParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancel;
    
    UMessagePopupParams();
};

