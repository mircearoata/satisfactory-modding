// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLocomotiveMovementComponent.h"

UFGLocomotiveMovementComponent::UFGLocomotiveMovementComponent(){ }
void UFGLocomotiveMovementComponent::TickComponent(float dt, enum ELevelTick tickType, FActorComponentTickFunction *thisTickFunction){ }
void UFGLocomotiveMovementComponent::ComputeConstants(){ }
void UFGLocomotiveMovementComponent::TickSlaveInput(float dt, const UFGLocomotiveMovementComponent* master){ }
void UFGLocomotiveMovementComponent::TickTractionAndFriction(float dt){ }
void UFGLocomotiveMovementComponent::TickMasterInput(float dt){ }
void UFGLocomotiveMovementComponent::SetReverserInput(int32 reverser){ }
void UFGLocomotiveMovementComponent::SetThrottleInput(float throttle){ }
void UFGLocomotiveMovementComponent::SetSteeringInput(int32 steering){ }
void UFGLocomotiveMovementComponent::SetAirBrakeInput(float brake){ }
void UFGLocomotiveMovementComponent::SetEmergencyBrake(){ }
void UFGLocomotiveMovementComponent::SetHornInput(bool horn){ }
int32 UFGLocomotiveMovementComponent::GetSteering(bool clear){ return int32(); }
float UFGLocomotiveMovementComponent::GetRegenerativePowerFactor() const{ return float(); }
float UFGLocomotiveMovementComponent::CalcDynamicBrakeInput(){ return float(); }
float UFGLocomotiveMovementComponent::CalcAirBrakeInput(){ return float(); }
float UFGLocomotiveMovementComponent::CalcThrottleInput(){ return float(); }
void UFGLocomotiveMovementComponent::ClearInput(){ }
void UFGLocomotiveMovementComponent::UpdateState(float dt, const UFGLocomotiveMovementComponent* master){ }
void UFGLocomotiveMovementComponent::ServerUpdateState_Implementation(int32 inReverserInput, int32 inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput, bool inHornInput){ }
bool UFGLocomotiveMovementComponent::ServerUpdateState_Validate(int32 inReverserInput, int32 inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput, bool inHornInput){ return bool(); }
void UFGLocomotiveMovementComponent::UseReplicatedState(){ }
void UFGLocomotiveMovementComponent::UseMultipleUnitMasterState(const UFGLocomotiveMovementComponent* master){ }
void UFGLocomotiveMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const { Super::GetLifetimeReplicatedProps(OutLifetimeProps); }
