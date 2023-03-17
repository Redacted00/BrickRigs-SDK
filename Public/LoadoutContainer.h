#pragma once
#include "CoreMinimal.h"
#include "HUDIconProperties.h"
#include "StaticMeshProp.h"
#include "LoadoutContainer.generated.h"

class ABrickPlayerController;
class UHUDIconComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ALoadoutContainer : public AStaticMeshProp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDIconComponent* HUDIconComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDIconProperties IconProperties;
    
public:
    ALoadoutContainer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAnimation(float InAnimRatio);
    
private:
    UFUNCTION(BlueprintCallable)
    void Interact_Inventory(ABrickPlayerController* PC);
    
};

