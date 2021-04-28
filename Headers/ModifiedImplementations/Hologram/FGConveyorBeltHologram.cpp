// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConveyorBeltHologram.h"

AFGConveyorBeltHologram::AFGConveyorBeltHologram(){ }
void AFGConveyorBeltHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGConveyorBeltHologram::BeginPlay(){ }
bool AFGConveyorBeltHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGConveyorBeltHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGConveyorBeltHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
int32 AFGConveyorBeltHologram::GetBaseCostMultiplier() const{ return int32(); }
AActor* AFGConveyorBeltHologram::GetUpgradedActor() const{ return nullptr; }
void AFGConveyorBeltHologram::OnInvalidHitResult(){ }
void AFGConveyorBeltHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
bool AFGConveyorBeltHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGConveyorBeltHologram::AdjustForGround(const FHitResult& hitResult, FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
bool AFGConveyorBeltHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGConveyorBeltHologram::Scroll(int32 delta){ }
void AFGConveyorBeltHologram::GetSupportedScrollModes(TArray<EHologramScrollMode>* out_modes) const{ }
bool AFGConveyorBeltHologram::CanTakeNextBuildStep() const{ return bool(); }
void AFGConveyorBeltHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGConveyorBeltHologram::ClientPreConstructMessageSerialization(){ }
void AFGConveyorBeltHologram::ServerPostConstructMessageDeserialization(){ }
EFactoryConnectionDirection AFGConveyorBeltHologram::GetActiveConnectionDirection() const{ return EFactoryConnectionDirection(); }
TArray<AFGBuildable*> AFGConveyorBeltHologram::GetAnyConnectedBuildables(){ return TArray<AFGBuildable*>(); }
void AFGConveyorBeltHologram::CheckValidFloor(){ }
void AFGConveyorBeltHologram::CheckClearance(){ }
void AFGConveyorBeltHologram::CheckValidPlacement(){ }
void AFGConveyorBeltHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGConveyorBeltHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGConveyorBeltHologram::SetupConveyorClearanceDetector(){ }
void AFGConveyorBeltHologram::UpdateSplineComponent(){ }
void AFGConveyorBeltHologram::OnRep_ConnectionArrowComponentDirection(){ }
void AFGConveyorBeltHologram::AutoRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
bool AFGConveyorBeltHologram::ValidateIncline(){ return bool(); }
bool AFGConveyorBeltHologram::ValidateMinLength(){ return bool(); }
