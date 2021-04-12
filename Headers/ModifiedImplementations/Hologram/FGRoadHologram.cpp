// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRoadHologram.h"

AFGRoadHologram::AFGRoadHologram() : Super() {
	this->mSplineData.SetNum(2); this->mSplineData[0].Location.X = 0; this->mSplineData[0].Location.Y = 0; this->mSplineData[0].Location.Z = 0; this->mSplineData[0].ArriveTangent.X = 1; this->mSplineData[0].ArriveTangent.Y = 0; this->mSplineData[0].ArriveTangent.Z = 0; this->mSplineData[0].LeaveTangent.X = 1; this->mSplineData[0].LeaveTangent.Y = 0; this->mSplineData[0].LeaveTangent.Z = 0; this->mSplineData[1].Location.X = 0; this->mSplineData[1].Location.Y = 0; this->mSplineData[1].Location.Z = 0; this->mSplineData[1].ArriveTangent.X = 1; this->mSplineData[1].ArriveTangent.Y = 0; this->mSplineData[1].ArriveTangent.Z = 0; this->mSplineData[1].LeaveTangent.X = 1; this->mSplineData[1].LeaveTangent.Y = 0; this->mSplineData[1].LeaveTangent.Z = 0;
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGRoadHologram::BeginPlay(){ }
USceneComponent* AFGRoadHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGRoadHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGRoadHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGRoadHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGRoadHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGRoadHologram::CheckValidFloor(){ }
void AFGRoadHologram::CheckClearance(){ }
UFGRoadConnectionComponent* AFGRoadHologram::FindOverlappingConnectionComponent(const FVector& location, float radius,  UFGRoadConnectionComponent* ignoredConnection, bool ignoreIsConnected) const{ return nullptr; }
