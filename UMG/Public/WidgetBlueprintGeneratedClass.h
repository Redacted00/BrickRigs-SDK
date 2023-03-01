#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintGeneratedClass -FallbackName=BlueprintGeneratedClass
#include "DelegateRuntimeBinding.h"
#include "WidgetBlueprintGeneratedClass.generated.h"

class UWidgetAnimation;
class UWidgetTree;

UCLASS(Blueprintable)
class UMG_API UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetTree* WidgetTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClassRequiresNativeTick: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDelegateRuntimeBinding> Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NamedSlots;
    
    UWidgetBlueprintGeneratedClass();
};

