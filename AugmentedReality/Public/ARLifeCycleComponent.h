#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ARLifeCycleComponent.generated.h"

class AARActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARLifeCycleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInstanceARActorToBeDestroyedDelegate, AARActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInstanceARActorSpawnedDelegate, UClass*, ComponentClass, FGuid, NativeID, AARActor*, SpawnedActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceARActorSpawnedDelegate OnARActorSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceARActorToBeDestroyedDelegate OnARActorToBeDestroyedDelegate;
    
    UARLifeCycleComponent();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyARActor(AARActor* Actor);
    
};

