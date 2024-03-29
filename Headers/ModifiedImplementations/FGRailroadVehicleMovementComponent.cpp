// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadVehicleMovementComponent.h"

FWheelsetSetup::FWheelsetSetup(){ }
FCouplerSetup::FCouplerSetup(){ }
UFGRailroadVehicleMovementComponent::UFGRailroadVehicleMovementComponent(){ }
void UFGRailroadVehicleMovementComponent::OnCreatePhysicsState(){ }
void UFGRailroadVehicleMovementComponent::OnDestroyPhysicsState(){ }
bool UFGRailroadVehicleMovementComponent::ShouldCreatePhysicsState() const{ return bool(); }
bool UFGRailroadVehicleMovementComponent::HasValidPhysicsState() const{ return bool(); }
float UFGRailroadVehicleMovementComponent::GetMaxSpeed() const{ return float(); }
AFGRailroadVehicle* UFGRailroadVehicleMovementComponent::GetOwningRailroadVehicle() const{ return nullptr; }
void UFGRailroadVehicleMovementComponent::ComputeConstants(){ }
void UFGRailroadVehicleMovementComponent::UpdateOrientation(){ }
USkinnedMeshComponent* UFGRailroadVehicleMovementComponent::GetMesh() const{ return nullptr; }
void UFGRailroadVehicleMovementComponent::FixupSkeletalMesh(){ }
void UFGRailroadVehicleMovementComponent::TickSlaveInput(float dt, const  UFGLocomotiveMovementComponent* master){ }
void UFGRailroadVehicleMovementComponent::TickTractionAndFriction(float dt){ }
void UFGRailroadVehicleMovementComponent::MoveVehicle(float dt, FRailroadTrackPosition newTrackPosition, bool shouldMoveComponent){ }
void UFGRailroadVehicleMovementComponent::UpdateCouplerRotationAndLength(){ }
float UFGRailroadVehicleMovementComponent::GetWheelsetAngle() const{ return float(); }
FVector UFGRailroadVehicleMovementComponent::GetWheelsetRotation(int32 index) const{ return FVector(); }
float UFGRailroadVehicleMovementComponent::GetWheelsetOffset(int32 index) const{ return float(); }
FVector UFGRailroadVehicleMovementComponent::GetCouplerRotationAndExtention(int32 index,  float& out_extention) const{ return FVector(); }
UFGRailroadVehicleMovementComponent* UFGRailroadVehicleMovementComponent::GetCoupledMovementAt(ERailroadVehicleCoupler coupler) const{ return nullptr; }
FVector UFGRailroadVehicleMovementComponent::CalcCouplerDistance(ERailroadVehicleCoupler coupler) const{ return FVector(); }
