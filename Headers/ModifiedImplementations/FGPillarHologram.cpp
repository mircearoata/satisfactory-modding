// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPillarHologram.h"

AFGPillarHologram::AFGPillarHologram(){ }
void AFGPillarHologram::BeginPlay(){ }
void AFGPillarHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGPillarHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPillarHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPillarHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGPillarHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
AActor* AFGPillarHologram::Construct(TArray<AActor*>& out_children, FNetConstructionID constructionID){ return nullptr; }
void AFGPillarHologram::SetMaterial( UMaterialInterface* material){ }
int32 AFGPillarHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGPillarHologram::GetSupportedBuildModes_Implementation(TArray<TSubclassOf<UFGHologramBuildModeDescriptor>>& out_buildmodes) const{ }
void AFGPillarHologram::OnBuildModeChanged(){ }
bool AFGPillarHologram::CanBeZooped() const{ return bool(); }
void AFGPillarHologram::FilterAttachmentPoints(TArray< const FFGAttachmentPoint* >& Points, AFGBuildable* pBuildable, const FHitResult& HitResult) const{ }
void AFGPillarHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGPillarHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
void AFGPillarHologram::CheckValidPlacement(){ }
bool AFGPillarHologram::IsHologramIdenticalToBuildable( AFGBuildable* buildable, const FVector& hologramLocationOffset) const{ return bool(); }
void AFGPillarHologram::OnRep_CurrentZoop(){ }
