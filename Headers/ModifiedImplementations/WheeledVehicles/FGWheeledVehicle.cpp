// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWheeledVehicle.h"

void AFGWheeledVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
AFGWheeledVehicle::AFGWheeledVehicle(){ }
void AFGWheeledVehicle::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGWheeledVehicle::BeginPlay(){ }
void AFGWheeledVehicle::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGWheeledVehicle::Destroyed(){ }
void AFGWheeledVehicle::Tick(float dt){ }
void AFGWheeledVehicle::DisplayDebug( UCanvas* canvas, const FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
bool AFGWheeledVehicle::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
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
void AFGWheeledVehicle::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWheeledVehicle::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
FVector AFGWheeledVehicle::GetRealActorLocation(){ return FVector(); }
FRotator AFGWheeledVehicle::GetRealActorRotation(){ return FRotator(); }
FLinearColor AFGWheeledVehicle::GetActorRepresentationColor(){ return FLinearColor(); }
EFogOfWarRevealType AFGWheeledVehicle::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGWheeledVehicle::GetActorFogOfWarRevealRadius(){ return float(); }
void AFGWheeledVehicle::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGWheeledVehicle::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
UStaticMesh* AFGWheeledVehicle::FindAttachedStaticMesh_Implementation(){ return nullptr; }
UWheeledVehicleMovementComponent* AFGWheeledVehicle::GetVehicleMovementComponent() const{ return nullptr; }
void AFGWheeledVehicle::SetMovementComponent(UWheeledVehicleMovementComponent* movementComponent){ }
bool AFGWheeledVehicle::HasFuel() const{ return bool(); }
void AFGWheeledVehicle::GetTireData(TArray< FTireData >& out_tireData){ }
UParticleSystem* AFGWheeledVehicle::GetSurfaceParticleSystem(UPhysicalMaterial* physMat){ return nullptr; }
float AFGWheeledVehicle::GetForwardSpeed(){ return float(); }
bool AFGWheeledVehicle::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
void AFGWheeledVehicle::HandleDestroyStaticMesh(AActor* actor, float forceOfCollision){ }
void AFGWheeledVehicle::HandleDestroyFoliage(){ }
bool AFGWheeledVehicle::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
bool AFGWheeledVehicle::ConsumesFuel(){ return bool(); }
float AFGWheeledVehicle::GetFuelBurnRatio(){ return float(); }
AFGDrivingTargetList* AFGWheeledVehicle::GetTargetList(bool createIfNeeded){ return nullptr; }
bool AFGWheeledVehicle::GetPathVisibility(){ return bool(); }
void AFGWheeledVehicle::Multicast_PlayFoliageDestroyedEffect_Implementation( UParticleSystem* destroyEffect,  UAkAudioEvent* destroyAudioEvent, FVector location){ }
void AFGWheeledVehicle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){ }
void AFGWheeledVehicle::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){ }
void AFGWheeledVehicle::ManageFakeForces(float DeltaTime){ }
void AFGWheeledVehicle::MeasureVelocities(float deltaTime){ }
FText AFGWheeledVehicle::GetDefaultMapName(TSubclassOf< AFGWheeledVehicle > vehicleType){ return FText(); }
AFGDrivingTargetList* AFGWheeledVehicle::GetActiveTargetList() const{ return nullptr; }
void AFGWheeledVehicle::SyncWithSimulation(){ }
bool AFGWheeledVehicle::ShouldStayAtDock(){ return bool(); }
float AFGWheeledVehicle::GetTotalFuelEnergy() const{ return float(); }
float AFGWheeledVehicle::CalculateFuelNeed() const{ return float(); }
float AFGWheeledVehicle::GetMaxFuelEnergy() const{ return float(); }
bool AFGWheeledVehicle::HasFuelForRoundtrip() const{ return bool(); }
ETransferAnimationState AFGWheeledVehicle::GetTransferAnimationState(float animationLength, float& animationTime){ return ETransferAnimationState(); }
void AFGWheeledVehicle::Died(AActor* thisActor){ }
void AFGWheeledVehicle::SetSimulated(bool newIsSimulated){ }
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
void AFGWheeledVehicle::OnCustomizationDataApplied(const FFactoryCustomizationData& customizationData){ }
void AFGWheeledVehicle::UpdateAirStatus(){ }
void AFGWheeledVehicle::UpdateTireEffects(){ }
void AFGWheeledVehicle::UpdateTireParticle(FTireData tireData){ }
void AFGWheeledVehicle::BurnFuel(float dt){ }
void AFGWheeledVehicle::ApplyAddedAngularVelocityModifiers(float deltaTime){ }
void AFGWheeledVehicle::SwitchParticle(int32 tireIndex, UParticleSystem* particleTemplate){ }
void AFGWheeledVehicle::DrawTireTrack(FTireData tireData, FVector decalLocation){ }
void AFGWheeledVehicle::ClampVelocities(){ }
void AFGWheeledVehicle::AddedLinearThrottleVelocity(){ }
void AFGWheeledVehicle::ApplyRollStabilisation(float deltaTime){ }
void AFGWheeledVehicle::ApplyAssistedVelocities(float deltaTime){ }
void AFGWheeledVehicle::SetRecordingStatus(ERecordingStatus recordingStatus){ }
void AFGWheeledVehicle::OnFuelAdded(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numAdded){ }
void AFGWheeledVehicle::OnRep_TransferStatusChanged(){ }
void AFGWheeledVehicle::StopVehicle(){ }
float AFGWheeledVehicle::AdjustThrottle(float throttle) const{ return float(); }
void AFGWheeledVehicle::StartRecording(){ }
void AFGWheeledVehicle::StopRecording(bool isValid){ }
void AFGWheeledVehicle::TickRecording(float deltaTime){ }
void AFGWheeledVehicle::PlaceTargetPoint(){ }
void AFGWheeledVehicle::ClearTargetList(){ }
void AFGWheeledVehicle::CacheSpeedInKMH(){ }
bool AFGWheeledVehicle::ShouldStopVehicle() const{ return bool(); }
void AFGWheeledVehicle::SetIsFollowingPath(bool isFollowingPath){ }
void AFGWheeledVehicle::StopAllMovement(){ }
float AFGWheeledVehicle::GetLocalTime() const{ return float(); }
void AFGWheeledVehicle::MoveForward(float axisValue){ }
void AFGWheeledVehicle::MoveRight(float axisValue){ }
void AFGWheeledVehicle::TurnOverVehicle(){ }
void AFGWheeledVehicle::SetIsPossessed(bool isPossessed){ }
bool AFGWheeledVehicle::CanLoadPath() const{ return bool(); }
bool AFGWheeledVehicle::CanSavePath() const{ return bool(); }
void AFGWheeledVehicle::SetCurrentTarget( AFGTargetPoint* newTarget){ }
void AFGWheeledVehicle::UpdateCurrentTarget(){ }
void AFGWheeledVehicle::PickNextTarget(){ }
void AFGWheeledVehicle::Server_Leave_Implementation(){ }
void AFGWheeledVehicle::Server_ToggleAutoPilot_Implementation(){ }
void AFGWheeledVehicle::Server_TogglePathVisibility_Implementation(){ }
void AFGWheeledVehicle::Server_ToggleRecording_Implementation(){ }
void AFGWheeledVehicle::Server_ClearRecordedPath_Implementation(){ }
void AFGWheeledVehicle::Server_SavePath_Implementation(const FString& saveName){ }
void AFGWheeledVehicle::Server_UnsavePath_Implementation(AFGSavedWheeledVehiclePath* path){ }
void AFGWheeledVehicle::Server_LoadPath_Implementation( AFGDrivingTargetList* targetList){ }
void AFGWheeledVehicle::FindSavedPaths(const FString& textFilter, bool filterOnVehicleType, TArray< AFGSavedWheeledVehiclePath* >& result) const{ }
void AFGWheeledVehicle::OnRep_IsFollowingPath(){ }
void AFGWheeledVehicle::OnRep_SimulationMovement(){ }
void AFGWheeledVehicle::OnRep_RecordingStatus(){ }
void AFGWheeledVehicle::OnRep_IsGhosting(){ }
void AFGWheeledVehicle::OnIsSimulatedChanged(){ }
void AFGWheeledVehicle::TryActivatePathSimulation(){ }
void AFGWheeledVehicle::AttachSimulatedVehicle(){ }
FVector AFGWheeledVehicle::GetVelocityVector() const{ return FVector(); }
void AFGWheeledVehicle::OnSimulationTargetReached(AFGTargetPoint* newTarget){ }
void AFGWheeledVehicle::PickFirstTargetAfterStation(){ }
AFGTargetPoint* AFGWheeledVehicle::SpawnNewTargetPoint(const FVector& location, const FRotator& rotation, AFGDrivingTargetList* targetList, int targetSpeed, AFGTargetPoint* afterTarget){ return nullptr; }
void AFGWheeledVehicle::OnTargetWasForceClaimed( AFGTargetPoint* target,  AFGWheeledVehicle* claimant){ }
UFGVehicleCollisionBoxComponent* AFGWheeledVehicle::FindCollisionBox() const{ return nullptr; }
void AFGWheeledVehicle::StartGhosting(){ }
void AFGWheeledVehicle::TryLeaveSimulatedMode(){ }
bool AFGWheeledVehicle::IsAboveSolidGround(const FTransform& transform) const{ return bool(); }
bool AFGWheeledVehicle::IsLeaveSimulationFriendly(const FTransform& transform) const{ return bool(); }
void AFGWheeledVehicle::GiveWayTo(const AFGWheeledVehicle* other){ }
float AFGWheeledVehicle::CalculateAutomatedFuelToConsume(float deltaTime){ return float(); }
FName AFGWheeledVehicle::VehicleMovementComponentName = FName();
