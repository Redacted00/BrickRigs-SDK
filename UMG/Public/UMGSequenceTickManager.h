#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UMGSequenceTickManager.generated.h"

class UMovieSceneEntitySystemLinker;
class UUserWidget;

UCLASS(Blueprintable)
class UMG_API UUMGSequenceTickManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UUMGSequenceTickManager();
};

