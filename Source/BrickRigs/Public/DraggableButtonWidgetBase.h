#pragma once
#include "CoreMinimal.h"
#include "ButtonWidgetBase.h"
#include "DraggableButtonWidgetBase.generated.h"

class UBrickBorder;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UDraggableButtonWidgetBase : public UButtonWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickBorder* FillBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionSpeed;
    
public:
    UDraggableButtonWidgetBase();
};

