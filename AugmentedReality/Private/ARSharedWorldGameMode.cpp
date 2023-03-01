#include "ARSharedWorldGameMode.h"

class AARSharedWorldGameState;

void AARSharedWorldGameMode::SetPreviewImageData(TArray<uint8> ImageData) {
}

void AARSharedWorldGameMode::SetARWorldSharingIsReady() {
}

void AARSharedWorldGameMode::SetARSharedWorldData(TArray<uint8> ARWorldData) {
}

AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState() {
    return NULL;
}

AARSharedWorldGameMode::AARSharedWorldGameMode() {
    this->BufferSizePerChunk = 512;
}

