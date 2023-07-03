#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "HUDIconProperties.h"
#include "HUDIconComponent.generated.h"

class ABrickPlayerController;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UHUDIconComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDIconProperties HUDIconProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestLineOfSight;
    
    UHUDIconComponent();
    UFUNCTION(BlueprintCallable)
    void SetIconLocationDelegate(UObject* Object, FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void SetIconLocation(const FVector& NewLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void Interact_Spawn(ABrickPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void Interact_PlaceMarker(ABrickPlayerController* PC);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindGetInteractionOptionsDelegate(UObject* Object, FName FunctionName);
    
};

