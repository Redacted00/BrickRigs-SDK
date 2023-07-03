#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BrickEditorObjectFilterParams.h"
#include "BrickEditorObjectFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickEditorObjectFilter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeUncategorizedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickEditorObjectFilterParams FilterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectFilterParams> SubFilters;
    
public:
    UBrickEditorObjectFilter();
};

