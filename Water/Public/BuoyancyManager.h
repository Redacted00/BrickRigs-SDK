#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BuoyancyManager.generated.h"

class ABuoyancyManager;
class UBuoyancyComponent;
class UObject;

UCLASS(Blueprintable)
class WATER_API ABuoyancyManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBuoyancyComponent*> BuoyancyComponents;
    
public:
    ABuoyancyManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetBuoyancyComponentManager(const UObject* WorldContextObject, ABuoyancyManager*& Manager);
    
};

