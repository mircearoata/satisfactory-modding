// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGConveyorLiftHologram.h"

AFGConveyorLiftHologram::AFGConveyorLiftHologram() : Super() {
	this->mConnectionComponents[0] = nullptr;
	this->mConnectionComponents[1] = nullptr;
	this->mSnappedConnectionComponents[0] = nullptr;
	this->mSnappedConnectionComponents[1] = nullptr;
	this->mUpgradedConveyorLift = nullptr;
	this->mBottomMesh = nullptr;
	this->mMidMesh = nullptr;
	this->mHalfMidMesh = nullptr;
	this->mTopMesh = nullptr;
	this->mJointMesh = nullptr;
	this->mPassthroughBottomMesh = nullptr;
	this->mPassthroughTopMesh = nullptr;
	this->mArrowDirection = EFactoryConnectionDirection::FCD_ANY;
	this->mArrowComponent = nullptr;
	this->mBuildModeReverse = nullptr;
	this->mUseBuildClearanceOverlapSnapp = false;
}
void AFGConveyorLiftHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGConveyorLiftHologram::BeginPlay(){ }
bool AFGConveyorLiftHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGConveyorLiftHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGConveyorLiftHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
bool AFGConveyorLiftHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGConveyorLiftHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
AActor* AFGConveyorLiftHologram::GetUpgradedActor() const{ return nullptr; }
int32 AFGConveyorLiftHologram::GetBaseCostMultiplier() const{ return int32(); }
float AFGConveyorLiftHologram::GetHologramHoverHeight() const{ return float(); }
void AFGConveyorLiftHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
void AFGConveyorLiftHologram::GetSupportedBuildModes_Implementation(TArray< TSubclassOf< UFGHologramBuildModeDescriptor > >& out_buildmodes) const{ }
void AFGConveyorLiftHologram::PostHologramPlacement(){ }
void AFGConveyorLiftHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGConveyorLiftHologram::ServerPostConstructMessageDeserialization(){ }
void AFGConveyorLiftHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
void AFGConveyorLiftHologram::CheckValidFloor(){ }
void AFGConveyorLiftHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGConveyorLiftHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
int32 AFGConveyorLiftHologram::GetRotationStep() const{ return int32(); }
void AFGConveyorLiftHologram::UpdateConnectionDirections(){ }
void AFGConveyorLiftHologram::CheckValidPlacement(){ }
void AFGConveyorLiftHologram::UpdateTopTransform(const FHitResult& hitResult, FRotator rotation){ }
void AFGConveyorLiftHologram::OnRep_TopTransform(){ }
void AFGConveyorLiftHologram::UpdateClearance(){ }
void AFGConveyorLiftHologram::OnRep_ArrowDirection(){ }
void AFGConveyorLiftHologram::OnRep_SnappedPassthroughs(){ }
bool AFGConveyorLiftHologram::CanConnectToConnection(UFGFactoryConnectionComponent* from, UFGFactoryConnectionComponent* to) const{ return bool(); }
