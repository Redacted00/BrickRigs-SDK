#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponentPropertyBinding.h"
#include "NiagaraRendererProperties.h"
#include "NiagaraVariableAttributeBinding.h"
#include "Templates/SubclassOf.h"
#include "NiagaraComponentRendererProperties.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USceneComponent> ComponentType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ComponentCountLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding EnabledBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssignComponentsOnParticleID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCreateComponentsOnParticleSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RendererVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TemplateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraComponentPropertyBinding> PropertyBindings;
    
    UNiagaraComponentRendererProperties();
};

