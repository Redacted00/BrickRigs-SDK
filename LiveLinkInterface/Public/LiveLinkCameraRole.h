#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTransformRole.h"
#include "LiveLinkCameraRole.generated.h"

UCLASS(Blueprintable)
class LIVELINKINTERFACE_API ULiveLinkCameraRole : public ULiveLinkTransformRole {
    GENERATED_BODY()
public:
    ULiveLinkCameraRole();
};

