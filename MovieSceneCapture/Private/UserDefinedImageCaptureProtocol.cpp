#include "UserDefinedImageCaptureProtocol.h"

class UTexture;

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& StreamID, const FFrameMetrics& FrameMetrics, bool bCopyImageData) {
}

FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame() {
    return TEXT("");
}

FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(UTexture* Buffer, const FCapturedPixelsID& StreamID) {
    return TEXT("");
}

UUserDefinedImageCaptureProtocol::UUserDefinedImageCaptureProtocol() {
    this->Format = EDesiredImageFormat::EXR;
    this->bEnableCompression = false;
    this->CompressionQuality = 100;
}

