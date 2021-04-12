// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFoundationHologram.h"

AFGFoundationHologram::AFGFoundationHologram() : Super() {
	this->mMaxPlacementFloorAngle = 85;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWalkway::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGFoundationHologram::BeginPlay(){ }
bool AFGFoundationHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGFoundationHologram::CheckValidFloor(){ }
bool AFGFoundationHologram::CanSnapVertically( AFGBuildableFoundation* toFoundation, float dirZ) const{ return bool(); }
