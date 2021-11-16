// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipelineSupportHologram.h"

AFGPipelineSupportHologram::AFGPipelineSupportHologram(){ }
void AFGPipelineSupportHologram::BeginPlay(){ }
bool AFGPipelineSupportHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGPipelineSupportHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPipelineSupportHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPipelineSupportHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
AActor* AFGPipelineSupportHologram::Construct(TArray<AActor*>& out_children, FNetConstructionID constructionID){ return nullptr; }
void AFGPipelineSupportHologram::GetSupportedBuildModes_Implementation(TArray< TSubclassOf< UFGHologramBuildModeDescriptor > >& out_buildmodes) const{ }
void AFGPipelineSupportHologram::OnBuildModeChanged(){ }
int32 AFGPipelineSupportHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGPipelineSupportHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGPipelineSupportHologram::SetSupportLength(float height){ }
void AFGPipelineSupportHologram::SnapToConnection(UFGPipeConnectionComponentBase* connection,  AFGPipelineHologram* parentPipeline){ }
void AFGPipelineSupportHologram::ResetBuildSteps(){ }
void AFGPipelineSupportHologram::ResetVerticalRotation(){ }
void AFGPipelineSupportHologram::UpdateSupportLengthRelativeLoc(){ }
void AFGPipelineSupportHologram::Scroll(int32 delta){ }
void AFGPipelineSupportHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGPipelineSupportHologram::CheckValidPlacement(){ }
void AFGPipelineSupportHologram::OnRep_SupportMesh(){ }
void AFGPipelineSupportHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const { Super::GetLifetimeReplicatedProps(OutLifetimeProps); }
