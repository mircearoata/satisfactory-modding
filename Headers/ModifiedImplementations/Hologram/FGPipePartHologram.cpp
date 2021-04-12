// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipePartHologram.h"

AFGPipePartHologram::AFGPipePartHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGPipePartHologram::BeginPlay(){ }
bool AFGPipePartHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGPipePartHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPipePartHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPipePartHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGPipePartHologram::CheckValidFloor(){ }
void AFGPipePartHologram::SetSupportLength(float height){ }
void AFGPipePartHologram::SnapToConnection(UFGPipeConnectionComponentBase* connection, FVector preSnapLocation){ }
void AFGPipePartHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGPipePartHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGPipePartHologram::CheckClearance(){ }
void AFGPipePartHologram::CheckValidPlacement(){ }
void AFGPipePartHologram::OnRep_SupportMesh(){ }
void AFGPipePartHologram::UpdateSupportLengthRelativeLoc(){ }
void AFGPipePartHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const { Super::GetLifetimeReplicatedProps(OutLifetimeProps); }
