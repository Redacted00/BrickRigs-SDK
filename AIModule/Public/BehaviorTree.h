#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BTDecoratorLogic.h"
#include "BlackboardAssetProvider.h"
#include "BehaviorTree.generated.h"

class UBTCompositeNode;
class UBTDecorator;
class UBlackboardData;

UCLASS(Blueprintable)
class AIMODULE_API UBehaviorTree : public UObject, public IBlackboardAssetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBTCompositeNode* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBTDecorator*> RootDecorators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBTDecoratorLogic> RootDecoratorOps;
    
    UBehaviorTree();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UBlackboardData* GetBlackboardAsset() const override PURE_VIRTUAL(GetBlackboardAsset, return NULL;);
    
};

