#include "ARSharedWorldPlayerController.h"

void AARSharedWorldPlayerController::ServerMarkReadyForReceiving_Implementation() {
}
bool AARSharedWorldPlayerController::ServerMarkReadyForReceiving_Validate() {
    return true;
}

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData_Implementation(int32 Offset, const TArray<uint8>& Buffer) {
}
bool AARSharedWorldPlayerController::ClientUpdatePreviewImageData_Validate(int32 Offset, const TArray<uint8>& Buffer) {
    return true;
}

void AARSharedWorldPlayerController::ClientUpdateARWorldData_Implementation(int32 Offset, const TArray<uint8>& Buffer) {
}
bool AARSharedWorldPlayerController::ClientUpdateARWorldData_Validate(int32 Offset, const TArray<uint8>& Buffer) {
    return true;
}

void AARSharedWorldPlayerController::ClientInitSharedWorld_Implementation(int32 PreviewImageSize, int32 ARWorldDataSize) {
}
bool AARSharedWorldPlayerController::ClientInitSharedWorld_Validate(int32 PreviewImageSize, int32 ARWorldDataSize) {
    return true;
}

AARSharedWorldPlayerController::AARSharedWorldPlayerController() {
}

