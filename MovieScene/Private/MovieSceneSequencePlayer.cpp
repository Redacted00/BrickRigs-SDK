#include "MovieSceneSequencePlayer.h"
#include "Net/UnrealNetwork.h"

class UMovieSceneSequence;
class UObject;

void UMovieSceneSequencePlayer::StopAtCurrentTime() {
}

void UMovieSceneSequencePlayer::Stop() {
}

void UMovieSceneSequencePlayer::SetTimeRange(float NewStartTime, float Duration) {
}

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
}

void UMovieSceneSequencePlayer::SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams) {
}

void UMovieSceneSequencePlayer::SetFrameRate(FFrameRate FrameRate) {
}

void UMovieSceneSequencePlayer::SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames) {
}

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
}

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
}

bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const FString& InLabel) {
    return false;
}

void UMovieSceneSequencePlayer::ScrubToFrame(FFrameTime NewPosition) {
}

void UMovieSceneSequencePlayer::Scrub() {
}

void UMovieSceneSequencePlayer::RPC_OnStopEvent_Implementation(FFrameTime StoppedTime) {
}

void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod Method, FFrameTime RelevantTime) {
}

void UMovieSceneSequencePlayer::RestoreState() {
}

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
}

bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const FString& InLabel) {
    return false;
}

void UMovieSceneSequencePlayer::PlayToFrame(FFrameTime NewPosition) {
}

void UMovieSceneSequencePlayer::PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams) {
}

void UMovieSceneSequencePlayer::PlayReverse() {
}

void UMovieSceneSequencePlayer::PlayLooping(int32 NumLoops) {
}

void UMovieSceneSequencePlayer::Play() {
}

void UMovieSceneSequencePlayer::Pause() {
}

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds) {
}

bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const FString& InLabel) {
    return false;
}

void UMovieSceneSequencePlayer::JumpToFrame(FFrameTime NewPosition) {
}

bool UMovieSceneSequencePlayer::IsReversed() const {
    return false;
}

bool UMovieSceneSequencePlayer::IsPlaying() const {
    return false;
}

bool UMovieSceneSequencePlayer::IsPaused() const {
    return false;
}

void UMovieSceneSequencePlayer::GoToEndAndStop() {
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime() const {
    return FQualifiedFrameTime{};
}

UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence() const {
    return NULL;
}

float UMovieSceneSequencePlayer::GetPlayRate() const {
    return 0.0f;
}

TArray<FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(UObject* InObject) {
    return TArray<FMovieSceneObjectBindingID>();
}

FFrameRate UMovieSceneSequencePlayer::GetFrameRate() const {
    return FFrameRate{};
}

int32 UMovieSceneSequencePlayer::GetFrameDuration() const {
    return 0;
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime() const {
    return FQualifiedFrameTime{};
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration() const {
    return FQualifiedFrameTime{};
}

bool UMovieSceneSequencePlayer::GetDisableCameraCuts() {
    return false;
}

FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime() const {
    return FQualifiedFrameTime{};
}

TArray<UObject*> UMovieSceneSequencePlayer::GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<UObject*>();
}

void UMovieSceneSequencePlayer::ChangePlaybackDirection() {
}

void UMovieSceneSequencePlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMovieSceneSequencePlayer, bReversePlayback);
    DOREPLIFETIME(UMovieSceneSequencePlayer, StartTime);
    DOREPLIFETIME(UMovieSceneSequencePlayer, DurationFrames);
    DOREPLIFETIME(UMovieSceneSequencePlayer, DurationSubFrames);
    DOREPLIFETIME(UMovieSceneSequencePlayer, PlaybackSettings);
    DOREPLIFETIME(UMovieSceneSequencePlayer, NetSyncProps);
}

UMovieSceneSequencePlayer::UMovieSceneSequencePlayer() {
    this->Status = EMovieScenePlayerStatus::Stopped;
    this->bReversePlayback = false;
    this->Sequence = NULL;
    this->DurationFrames = 0;
    this->DurationSubFrames = 0.00f;
    this->CurrentNumLoops = 0;
    this->TickManager = NULL;
}

