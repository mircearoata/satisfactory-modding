// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCharacterMovementComponent.h"

UFGCharacterMovementComponent::UFGCharacterMovementComponent(){ 
	this->mLastJumpTimeStamp = 0.0;
	this->mIsParachuting = false;
	this->mClimbSpeed = 500.0;
	this->mMaxSprintSpeed = 900.0;
	this->mSprintMinDotResult = 0.75;
	this->mJumpOffLadderVelocity = 300.0;
	this->mFGCharacterOwner = nullptr;
	this->mCachedJetPack = nullptr;
	this->mCachedParachute = nullptr;
	this->mCachedHookshot = nullptr;
	this->mCachedJumpingStilts = nullptr;
	this->mCachedHoverPack = nullptr;
	this->mCachedSurfedRailroadTrack = nullptr;
	this->mOnLadder = nullptr;
	this->mPipeData.mTravelingPipeHyper = nullptr;
	this->mPipeData.mMinPipeSpeed = 300.0;
	this->mPipeData.mPipeGravityStrength = 1500.0;
	this->mPipeData.mPipeFriction = 0.05;
	this->mPipeData.mPipeConstantAcceleration = 110.0;
	this->mPipeData.mPipeCurveDamping = 0.4;
	this->mSlideCurve = nullptr;
	this->mSlopeCurve = nullptr;
	this->mMaxSlideAngle = 1.65;
	this->mBaseVelocity.X = 0.0;
	this->mBaseVelocity.Y = 0.0;
	this->mBaseVelocity.Z = 0.0;
	this->mBoostJumpZMultiplier = 1.5;
	this->mBoostJumpVelocityMultiplier = 1.3;
	this->mBoostJumpTimeWindow = 0.15;
	this->mZiplineData.Direction.X = 0.0;
	this->mZiplineData.Direction.Y = 0.0;
	this->mZiplineData.Direction.Z = 0.0;
	this->mZiplineData.LastVelocityApplied.X = 0.0;
	this->mZiplineData.LastVelocityApplied.Y = 0.0;
	this->mZiplineData.LastVelocityApplied.Z = 0.0;
	this->mZiplineData.SpeedMultiplier = 0.0;
	this->mZiplineData.AttachActor = nullptr;
	this->mZiplineSpeed = 1200.0;
	this->mZiplineCorrectionSpeedMultiplier = 10.0;
	this->mZiplineVelocityInterpolationSpeed = 1.0;
	this->mZiplineSpeedMultiplierUp = 0.5;
	this->mZiplineSpeedMultiplierDown = 1.3;
}
void UFGCharacterMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction){ }
FNetworkPredictionData_Client* UFGCharacterMovementComponent::GetPredictionData_Client() const{ return nullptr; }
bool UFGCharacterMovementComponent::DoJump(bool isReplayingMoves){ return bool(); }
void UFGCharacterMovementComponent::CalcVelocity(float dt, float friction, bool isFluid, float brakingDeceleration){ }
float UFGCharacterMovementComponent::GetMaxSpeed() const{ return float(); }
void UFGCharacterMovementComponent::StartNewPhysics(float deltaTime, int32 Iterations){ }
void UFGCharacterMovementComponent::SetDefaultMovementMode(){ }
float UFGCharacterMovementComponent::GetMaxJumpZVelocity() const{ return float(); }
bool UFGCharacterMovementComponent::CanCrouchInCurrentState() const{ return bool(); }
void UFGCharacterMovementComponent::SmoothClientPosition(float DeltaSeconds){ }
void UFGCharacterMovementComponent::ServerSetHookLocation_Implementation(const FVector& hookLocation){ }
bool UFGCharacterMovementComponent::ServerSetHookLocation_Validate(const FVector& hookLocation){ return bool(); }
void UFGCharacterMovementComponent::SetHookLocation(const FVector& hookLocation){ }
void UFGCharacterMovementComponent::SetWantsToSprint(bool wantsToSprint){ }
bool UFGCharacterMovementComponent::CanGrabLadder( UFGLadderComponent* ladder) const{ return bool(); }
void UFGCharacterMovementComponent::StartClimbLadder( UFGLadderComponent* ladder){ }
void UFGCharacterMovementComponent::StopClimbLadder(){ }
void UFGCharacterMovementComponent::JumpOffLadder(){ }
UFGLadderComponent* UFGCharacterMovementComponent::GetOnLadder() const{ return nullptr; }
bool UFGCharacterMovementComponent::EnterPipeHyper( AFGBuildablePipeHyperPart* pipe){ return bool(); }
FVector UFGCharacterMovementComponent::GetPipeTravelDirectionWorld(){ return FVector(); }
FRotator UFGCharacterMovementComponent::GetPipeCharacterTransform(FVector cameraForwardAxis){ return FRotator(); }
void UFGCharacterMovementComponent::PipeHyperForceExit(){ }
bool UFGCharacterMovementComponent::WantsToSlide(){ return bool(); }
void UFGCharacterMovementComponent::UpdateSlideStatus(){ }
void UFGCharacterMovementComponent::UpdateZiplineStatus(float dt){ }
bool UFGCharacterMovementComponent::SetTravelingPipeHyperActor(AActor* hyperPipeInterfaceActor){ return bool(); }
const USceneComponent* UFGCharacterMovementComponent::GetUpdateComponent() const{ return nullptr; }
float UFGCharacterMovementComponent::GetZiplineSpeed(bool IsSprinting) const{ return float(); }
void UFGCharacterMovementComponent::StopZiplineMovement(FVector exitForce){ }
void UFGCharacterMovementComponent::StartZiplineMovement(AActor* ziplineActor, FVector actorForward){ }
void UFGCharacterMovementComponent::UpdateFromCompressedFlags(uint8 flags){ }
void UFGCharacterMovementComponent::OnMovementUpdated(float deltaSeconds, const FVector & oldLocation, const FVector & oldVelocity){ }
void UFGCharacterMovementComponent::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode){ }
void UFGCharacterMovementComponent::PhysCustom(float deltaTime, int32 Iterations){ }
void UFGCharacterMovementComponent::ExecuteDeferredCollisionChange(){ }
void UFGCharacterMovementComponent::SetOnLadder( UFGLadderComponent* ladder){ }
void UFGCharacterMovementComponent::PhysFlying(float deltaTime, int32 Iterations){ }
void UFGCharacterMovementComponent::PhysLadder(float deltaTime, int32 iterations){ }
void UFGCharacterMovementComponent::PhysPipe(float deltaTime, int32 iterations){ }
void UFGCharacterMovementComponent::PhysZipline(float deltaTime, int32 iterations){ }
void UFGCharacterMovementComponent::PhysHover(float deltaTime, int32 iterations){ }
void UFGCharacterMovementComponent::UpdateJetPack(float deltaSeconds){ }
void UFGCharacterMovementComponent::UpdateHookshot(float deltaSeconds, FVector oldLocation){ }
void UFGCharacterMovementComponent::UpdateSprintStatus(){ }
void UFGCharacterMovementComponent::UpdateParachute(float delta){ }
void UFGCharacterMovementComponent::UpdateJumpingStilts(float deltaSeconds){ }
void UFGCharacterMovementComponent::UpdateHoverPack(float deltaSeconds){ }
bool UFGCharacterMovementComponent::CanSprint() const{ return bool(); }
bool UFGCharacterMovementComponent::CanSlide() const{ return bool(); }
bool UFGCharacterMovementComponent::CanStartSlide() const{ return bool(); }
AFGJetPack* UFGCharacterMovementComponent::GetCachedJetPack(){ return nullptr; }
AFGHookshot* UFGCharacterMovementComponent::GetCachedHookshot(){ return nullptr; }
AFGParachute* UFGCharacterMovementComponent::GetCachedParachute(){ return nullptr; }
AFGJumpingStilts* UFGCharacterMovementComponent::GetCachedJumpingStilts(){ return nullptr; }
AFGHoverPack* UFGCharacterMovementComponent::GetCachedHoverPack(){ return nullptr; }
void UFGCharacterMovementComponent::TickSlide(float delta){ }
void FSavedMove_FGMovement::Clear(){ }
uint8 FSavedMove_FGMovement::GetCompressedFlags() const{ return uint8(); }
bool FSavedMove_FGMovement::CanCombineWith(const FSavedMovePtr& newMove, ACharacter* character, float maxDelta) const{ return bool(); }
void FSavedMove_FGMovement::SetMoveFor(ACharacter* character, float inDeltaTime, FVector const& newAccel,  FNetworkPredictionData_Client_Character & clientData){ }
void FSavedMove_FGMovement::PrepMoveFor( ACharacter* character){ }
FNetworkPredictionData_Client_FGMovement::FNetworkPredictionData_Client_FGMovement(const UCharacterMovementComponent& clientMovement) : FNetworkPredictionData_Client_Character(clientMovement) { }
FSavedMovePtr FNetworkPredictionData_Client_FGMovement::AllocateNewMove(){ return FSavedMovePtr(); }
