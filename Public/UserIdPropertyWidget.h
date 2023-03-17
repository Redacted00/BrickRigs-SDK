#pragma once
#include "CoreMinimal.h"
#include "PropertyWidget.h"
#include "UserIdPropertyWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BRICKRIGS_API UUserIdPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
    UUserIdPropertyWidget();
    UFUNCTION(BlueprintCallable)
    void ViewProfileInBrowser();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateUsername(const FText& InUsername);
    
};

