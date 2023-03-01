#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BrickPropertyInterface.h"
#include "BrickEditorMode.generated.h"

class ABrickEditor;

UCLASS(Abstract, Blueprintable, Within=BrickEditor)
class BRICKRIGS_API UBrickEditorMode : public UObject, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickEditor* BrickEditor;
    
public:
    UBrickEditorMode();
    
    // Fix for true pure virtual functions not being implemented
};

