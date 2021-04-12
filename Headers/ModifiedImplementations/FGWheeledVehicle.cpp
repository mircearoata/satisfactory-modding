// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWheeledVehicle.h"
#include "Hologram/FGWheeledVehicleHologram.h"
#include "GameFramework/FloatingPawnMovement.h"

void AFGWheeledVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
AFGWheeledVehicle::AFGWheeledVehicle() : Super() {
	this->mFuelConsumption = 1;
	this->mDistBetweenDecals = 50;
	this->mDecalLifespan = 5;
	this->mDecalSize.X = 35; this->mDecalSize.Y = 50; this->mDecalSize.Z = 1;
	this->mFoliageDestroyRadius = 200;
	this->mAddedGroundAngularVelocityStrengthYaw = 2;
	this->mAddedGroundAngularVelocityStrengthPitch = 0.200000002980232;
	this->mAddedAirControlAngularVelocityStrengthYaw = 1.5;
	this->mAddedAirControlAngularVelocityStrengthPitch = 1.39999997615814;
	this->mNaturalAngularVelocityStrengthYaw = 1.5;
	this->mNaturalAngularVelocityStrengthPitch = 1;
	this->mNaturalAirAngularVelocityStrengthYaw = 1.5;
	this->mNaturalAirAngularVelocityStrengthPitch = 1;
	this->mAddedAngularVelocityInputSmoothingSpeed = 0.5;
	this->mFoliageCollideBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FoliageBox")); this->mFoliageCollideBox->SetupAttachment(this->mMesh);
	this->mAuthoritativeRotation.X = 0; this->mAuthoritativeRotation.Y = 0; this->mAuthoritativeRotation.Z = 0; this->mAuthoritativeRotation.W = 0;
	this->mSimulationMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("SimulationComponent"));
	this->mIsPathVisible = true;
	this->mReverseAddedAngularVelocityYawMultiplier = 1;
	this->mHasAirControl = true;
	this->mGroundTraceLength = 300;
	this->mMaxDeltaLinearVelocity = 100;
	this->mMaxDeltaAngularVelocity = 550;
	this->mRollStabilisationStrength = 0.0260000005364418;
	this->mMaxRollAngleForUpsideDown = 85;
	this->mMaxFlatOnGroundRollAngleLimit = 5;
	this->mMaxRollForActivationOfAssistedVelocities = 75;
	this->mMaxSpeedForAddedAcceleration = 80;
	this->mMaxAssistedAcceleration = 500;
	this->mMinAngleForDrift = 7;
	this->mNeedsFuelToDrive = true;
	this->mHologramClass = AFGWheeledVehicleHologram::StaticClass();
	this->mDisabledByWaterLocations.SetNum(1); this->mDisabledByWaterLocations[0].X = 0; this->mDisabledByWaterLocations[0].Y = 0; this->mDisabledByWaterLocations[0].Z = 0;
	this->mSignificanceRange = 20000;
	this->mSimulationDistance = 20000;
	this->mShouldAttachDriver = true;
}
void AFGWheeledVehicle::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGWheeledVehicle::BeginPlay(){ }
void AFGWheeledVehicle::Destroyed(){ }
void AFGWheeledVehicle::Tick(float dt){ }
void AFGWheeledVehicle::DisplayDebug( UCanvas* canvas, const FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGWheeledVehicle::GainedSignificance_Implementation(){ }
void AFGWheeledVehicle::LostSignificance_Implementation(){ }
bool AFGWheeledVehicle::CanDock_Implementation(EDockStationType atStation) const{ return bool(); }
UFGInventoryComponent* AFGWheeledVehicle::GetDockInventory_Implementation() const{ return nullptr; }
UFGInventoryComponent* AFGWheeledVehicle::GetDockFuelInventory_Implementation() const{ return nullptr; }
void AFGWheeledVehicle::WasDocked_Implementation( AFGBuildableDockingStation* atStation){ }
void AFGWheeledVehicle::WasUndocked_Implementation(){ }
void AFGWheeledVehicle::OnBeginLoadVehicle_Implementation(){ }
void AFGWheeledVehicle::OnBeginUnloadVehicle_Implementation(){ }
void AFGWheeledVehicle::OnTransferComplete_Implementation(){ }
UWheeledVehicleMovementComponent* AFGWheeledVehicle::GetVehicleMovementComponent() const{ return nullptr; }
void AFGWheeledVehicle::SetMovementComponent(UWheeledVehicleMovementComponent* movementComponent){ }
bool AFGWheeledVehicle::HasFuel(){ return bool(); }
void AFGWheeledVehicle::GetTireData(TArray< FTireData >& out_tireData){ }
UParticleSystem* AFGWheeledVehicle::GetSurfaceParticleSystem(UPhysicalMaterial* physMat){ return nullptr; }
float AFGWheeledVehicle::GetForwardSpeed(){ return float(); }
bool AFGWheeledVehicle::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
void AFGWheeledVehicle::HandleDestroyStaticMesh(AActor* actor, float forceOfCollision){ }
void AFGWheeledVehicle::HandleDestroyFoliage(){ }
bool AFGWheeledVehicle::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
bool AFGWheeledVehicle::WantsToMove(){ return bool(); }
float AFGWheeledVehicle::GetFuelBurnRatio(){ return float(); }
UFGTargetPointLinkedList* AFGWheeledVehicle::GetTargetNodeLinkedList(){ return nullptr; }
void AFGWheeledVehicle::RemoveTargetPoint( AFGTargetPoint* targetToRemove){ }
void AFGWheeledVehicle::SetPathFromArray(TArray<  AFGTargetPoint* > targetPoints){ }
void AFGWheeledVehicle::Multicast_PlayFoliageDestroyedEffect_Implementation( UParticleSystem* destroyEffect,  UAkAudioEvent* destroyAudioEvent, FVector location){ }
void AFGWheeledVehicle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){ }
void AFGWheeledVehicle::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){ }
void AFGWheeledVehicle::ManageFakeForces(float DeltaTime){ }
void AFGWheeledVehicle::Died(AActor* thisActor){ }
void AFGWheeledVehicle::CreateInventoryItemDrops_Implementation(){ }
void AFGWheeledVehicle::SetAddedAngularVelocityPitch(float pitchToAdd){ }
void AFGWheeledVehicle::SetAddedAngularVelocityYaw(float yawToAdd){ }
void AFGWheeledVehicle::ResetAddedAngularVelocityValues(){ }
void AFGWheeledVehicle::UpdateAssistedVelocitiesState(){ }
void AFGWheeledVehicle::ServerUpdateAssistedVelocitiesState_Implementation(bool inDrifting, float inInputYaw, float inInputPitch){ }
bool AFGWheeledVehicle::ServerUpdateAssistedVelocitiesState_Validate(bool inDrifting, float inInputYaw, float inInputPitch){ return bool(); }
void AFGWheeledVehicle::UseReplicatedState(){ }
void AFGWheeledVehicle::SmoothMovementReplication(float DeltaTime){ }
void AFGWheeledVehicle::ReplicateMovementClientToServer_Implementation(FVector AuthoritativeLoc, FQuat AuthoritativeQuat, FVector AuthoritativeVelocity){ }
void AFGWheeledVehicle::UpdateAirStatus(){ }
void AFGWheeledVehicle::UpdateTireEffects(){ }
void AFGWheeledVehicle::UpdateTireParticle(FTireData tireData){ }
void AFGWheeledVehicle::BurnFuel(float dt){ }
void AFGWheeledVehicle::ApplyAddedAngularVelocityModifiers(float deltaTime){ }
void AFGWheeledVehicle::SwitchParticle(int32 tireIndex, UParticleSystem* particleTemplate){ }
void AFGWheeledVehicle::DrawTireTrack(FTireData tireData, FVector decalLocation){ }
void AFGWheeledVehicle::OnSimulationChanged(){ }
void AFGWheeledVehicle::ClampVelocities(){ }
void AFGWheeledVehicle::AddedLinearThrottleVelocity(){ }
void AFGWheeledVehicle::ApplyRollStabilisation(float deltaTime){ }
void AFGWheeledVehicle::ApplyAssistedVelocities(float deltaTime){ }
void AFGWheeledVehicle::OnRep_TransferStatusChanged(){ }
FName AFGWheeledVehicle::VehicleMovementComponentName = FName();
