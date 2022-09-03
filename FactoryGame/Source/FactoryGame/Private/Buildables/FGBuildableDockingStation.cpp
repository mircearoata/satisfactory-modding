// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableDockingStation.h"
#include "Replication/FGReplicationDetailInventoryComponent.h"

AFGBuildableDockingStation::AFGBuildableDockingStation() : Super() {
	this->mDockPosition = FVector2D::ZeroVector;
	this->mMinimumDockingTime = 10.0;
	this->mDockArea = nullptr;
	this->mActorRepresentationTexture = nullptr;
	this->mStorageSizeX = 4;
	this->mStorageSizeY = 4;
	this->mFuelInventorySizeX = 1;
	this->mFuelInventorySizeY = 1;
	this->mTransferSpeed = 1.0;
	this->mFuelTransferSpeed = 1.0;
	this->mTransferProgress = 0.0;
	this->mFuelInventoryHandler = CreateDefaultSubobject<UFGReplicationDetailInventoryComponent>(TEXT("FuelInventoryHandler"));
	this->mInventoryHandler = CreateDefaultSubobject<UFGReplicationDetailInventoryComponent>(TEXT("InventoryHandler"));
	this->mDockedActor = nullptr;
	this->mHasDockedActor = false;
	this->mIsInLoadMode = true;
	this->mStackTransferSize = 0.25;
	this->mIsLoadUnloading = false;
	this->mInfo = nullptr;
	this->mInventory = nullptr;
	this->mFuelInventory = nullptr;
	this->mForceSignificance = false;
	this->mVehicleFuelConsumptionRate = 0.0;
	this->mItemTransferRate = 0.0;
	this->mMaximumStackTransferRate = 0.0;
}
void AFGBuildableDockingStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableDockingStation, mTransferProgress);
	DOREPLIFETIME(AFGBuildableDockingStation, mIsInLoadMode);
	DOREPLIFETIME(AFGBuildableDockingStation, mIsLoadUnloading);
	DOREPLIFETIME(AFGBuildableDockingStation, mInfo);
	DOREPLIFETIME(AFGBuildableDockingStation, mForceSignificance);
	DOREPLIFETIME(AFGBuildableDockingStation, mVehicleFuelConsumptionRate);
	DOREPLIFETIME(AFGBuildableDockingStation, mItemTransferRate);
	DOREPLIFETIME(AFGBuildableDockingStation, mMaximumStackTransferRate);
}
void AFGBuildableDockingStation::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGBuildableDockingStation::BeginPlay(){ }
void AFGBuildableDockingStation::Tick(float DeltaSeconds){ }
void AFGBuildableDockingStation::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableDockingStation::Destroyed(){ }
void AFGBuildableDockingStation::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableDockingStation::OnReplicationDetailActorRemoved(){ }
float AFGBuildableDockingStation::GetSignificanceRange(){ return float(); }
bool AFGBuildableDockingStation::DockActor( AActor* actor){ return bool(); }
void AFGBuildableDockingStation::Undock(bool notifyDockedActor){ }
void AFGBuildableDockingStation::SetIsInLoadMode(bool isInLoadMode){ }
bool AFGBuildableDockingStation::GetIsInLoadMode() const{ return bool(); }
bool AFGBuildableDockingStation::IsLoadUnloading() const{ return bool(); }
void AFGBuildableDockingStation::SetVehicleFuelConsumptionRate(float vehicleFuelConsumptionRate){ }
void AFGBuildableDockingStation::SetItemTransferRate(float itemTransferRate){ }
void AFGBuildableDockingStation::SetMaximumStackTransferRate(float maximumItemTransferRate){ }
FVector AFGBuildableDockingStation::GetWorldDockPosition() const{ return FVector(); }
void AFGBuildableDockingStation::FindStationTargets(TArray<  AFGTargetPoint* >& targets){ }
void AFGBuildableDockingStation::UpdateVehicleTargets(bool lifecycleStart){ }
void AFGBuildableDockingStation::CleanUpStationVehicleTargets(){ }
void AFGBuildableDockingStation::AddDockingVehicle( AFGWheeledVehicle* vehicle){ }
void AFGBuildableDockingStation::RemoveDockingVehicle( AFGWheeledVehicle* vehicle){ }
void AFGBuildableDockingStation::UpdateVehicleFuelConsumptionRate(){ }
void AFGBuildableDockingStation::UpdateMaximumStackTransferRate(bool dispatchToMainThread){ }
void AFGBuildableDockingStation::UpdateItemTransferRate(bool dispatchToMainThread){ }
bool AFGBuildableDockingStation::CanBeRefuelingVehicle(AFGWheeledVehicle* vehicle) const{ return bool(); }
void AFGBuildableDockingStation::SetRefuelingVehicle(AFGWheeledVehicle* vehicle){ }
bool AFGBuildableDockingStation::HasSufficientFuelType() const{ return bool(); }
void AFGBuildableDockingStation::Factory_Tick(float dt){ }
void AFGBuildableDockingStation::Factory_TickProducing(float dt){ }
void AFGBuildableDockingStation::Factory_CollectInput_Implementation(){ }
bool AFGBuildableDockingStation::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableDockingStation::OnRep_ReplicationDetailActor(){ }
AFGReplicationDetailActor_DockingStation* AFGBuildableDockingStation::GetCastRepDetailsActor() const{ return nullptr; }
void AFGBuildableDockingStation::OnRep_FuelInventory(){ }
bool AFGBuildableDockingStation::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
bool AFGBuildableDockingStation::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
void AFGBuildableDockingStation::EnsureInfoCreated(){ }
bool AFGBuildableDockingStation::Factory_LoadFuel(AFGWheeledVehicle* vehicle, float percentOfStack, bool conserveFuel){ return bool(); }
void AFGBuildableDockingStation::Factory_LoadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::Factory_UnloadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::LoadUnloadVehicleComplete(){ }
void AFGBuildableDockingStation::OnDockingAreaBeginOverlap(UPrimitiveComponent* thisComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool isFromSweep, const FHitResult& sweepResult){ }
void AFGBuildableDockingStation::OnDockingAreaEndOverlap(UPrimitiveComponent* thisComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex){ }
void AFGBuildableDockingStation::OnRep_VehicleFuelConsumptionRate(){ }
void AFGBuildableDockingStation::OnRep_ItemTransferRate(){ }
void AFGBuildableDockingStation::OnRep_MaximumStackTransferRate(){ }
FName AFGBuildableDockingStation::sFuelTag = FName();
