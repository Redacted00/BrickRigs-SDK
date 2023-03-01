#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkSubjectName.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkVirtualSubject.generated.h"

class ULiveLinkFrameTranslator;
class ULiveLinkRole;

UCLASS(Abstract, Blueprintable)
class LIVELINKINTERFACE_API ULiveLinkVirtualSubject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkSubjectName> Subjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULiveLinkFrameTranslator*> FrameTranslators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebroadcastSubject;
    
public:
    ULiveLinkVirtualSubject();
};

