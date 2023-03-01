#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraPreviewAxis.generated.h"

class UNiagaraComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNiagaraPreviewAxis : public UObject {
    GENERATED_BODY()
public:
    UNiagaraPreviewAxis();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Num();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyToPreview(UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);
    
};

