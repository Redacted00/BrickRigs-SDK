#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "ARActor.generated.h"

class UARComponent;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API AARActor : public AActor {
    GENERATED_BODY()
public:
    AARActor();
    UFUNCTION(BlueprintCallable)
    UARComponent* AddARComponent(TSubclassOf<UARComponent> InComponentClass, const FGuid& NativeID);
    
};

