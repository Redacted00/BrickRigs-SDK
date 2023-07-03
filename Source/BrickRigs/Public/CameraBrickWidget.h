#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CameraBrickWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UCameraBrickWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateTargetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRangeUpdateInterval;
    
public:
    UCameraBrickWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTargetRange(bool bHitSomething, float Distance);
    
};

