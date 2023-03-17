#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
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

