#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
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

