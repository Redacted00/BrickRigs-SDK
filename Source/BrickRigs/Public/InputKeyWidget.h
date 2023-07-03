#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "KeyDisplayTableRow.h"
#include "InputKeyWidget.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputKeyWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* KeyDisplayTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedAsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnboundRenderOpacity;
    
public:
    UInputKeyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplayInfo(const FKeyDisplayTableRow& DisplayInfo, bool bIsGamepadKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetKey(const FKey& InKey, bool bInUsedAsModifier);
    
};

