#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BrickPropertyInterface.h"
#include "BrickEditorObject.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickEditorObject : public UObject, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* StaticInfoClass;
    
public:
    UBrickEditorObject();
    
    // Fix for true pure virtual functions not being implemented
};

