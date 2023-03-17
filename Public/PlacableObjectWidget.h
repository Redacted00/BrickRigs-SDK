#pragma once
#include "CoreMinimal.h"
#include "BrickUserWidget.h"
#include "PlacableObjectWidget.generated.h"

class UBrickButtonWidget;
class UBrickImage;
class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPlacableObjectWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* ThumbnailImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* NameTextBlock;
    
public:
    UPlacableObjectWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsFilterWidget(bool bNewIsFilter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenContextMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

