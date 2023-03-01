#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectRepresentation -FallbackName=LiveLinkSubjectRepresentation
#include "LiveLinkTickDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkComponentController.generated.h"

class ULiveLinkControllerBase;
class ULiveLinkRole;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIVELINKCOMPONENTS_API ULiveLinkComponentController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectRepresentation SubjectRepresentation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, NoClear, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ULiveLinkRole>, ULiveLinkControllerBase*> ControllerMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateInEditor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkTickDelegate OnLiveLinkUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ComponentToControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableEvaluateLiveLinkWhenSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvaluateLiveLink;
    
    ULiveLinkComponentController();
};

