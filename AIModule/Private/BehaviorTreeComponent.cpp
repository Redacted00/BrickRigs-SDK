#include "BehaviorTreeComponent.h"

class UBehaviorTree;

void UBehaviorTreeComponent::SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset) {
}

float UBehaviorTreeComponent::GetTagCooldownEndTime(FGameplayTag CooldownTag) const {
    return 0.0f;
}

void UBehaviorTreeComponent::AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration) {
}

UBehaviorTreeComponent::UBehaviorTreeComponent() {
    this->DefaultBehaviorTreeAsset = NULL;
}

