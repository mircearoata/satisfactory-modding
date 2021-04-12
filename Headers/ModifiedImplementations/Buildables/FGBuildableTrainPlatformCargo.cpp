// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableTrainPlatformCargo.h"

AFGBuildableTrainPlatformCargo::AFGBuildableTrainPlatformCargo() : Super() {
	this->mStorageSizeX = 4;
	this->mStorageSizeY = 4;
	this->mTimeToCompleteLoad = 20;
	this->mTimeToSwapLoadVisibility = 10;
	this->mTimeToCompleteUnload = 20;
	this->mTimeToSwapUnloadVisibility = 10;
	this->mPlatformConnections.Add(0); this->mPlatformConnections.Add(0);
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mFluidStackSizeMultiplier = 1;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->SetReplicates(true);
	this->NetDormancy = DORM_Awake;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableTrainPlatformCargo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableTrainPlatformCargo::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGBuildableTrainPlatformCargo::BeginPlay(){ }
void AFGBuildableTrainPlatformCargo::Destroyed(){ }
bool AFGBuildableTrainPlatformCargo::Factory_PeekOutput_Implementation(const  UFGFactoryConnectionComponent* connection, TArray< FInventoryItem >& out_items, TSubclassOf< UFGItemDescriptor > type) const{ return bool(); }
bool AFGBuildableTrainPlatformCargo::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
bool AFGBuildableTrainPlatformCargo::Dock( AFGRailroadVehicle* actor){ return bool(); }
void AFGBuildableTrainPlatformCargo::Undock(){ }
void AFGBuildableTrainPlatformCargo::SetIsInLoadMode(bool isInLoadMode){ }
bool AFGBuildableTrainPlatformCargo::GetIsInLoadMode() const{ return bool(); }
bool AFGBuildableTrainPlatformCargo::IsLoadUnloading() const{ return bool(); }
float AFGBuildableTrainPlatformCargo::GetDockedVehicleOffset() const{ return float(); }
void AFGBuildableTrainPlatformCargo::OnReplicationDetailActorRemoved(){ }
void AFGBuildableTrainPlatformCargo::NotifyTrainDocked( AFGRailroadVehicle* railroadVehicle,  AFGBuildableRailroadStation* initiatedByStation){ }
void AFGBuildableTrainPlatformCargo::UpdateDockingSequence(){ }
void AFGBuildableTrainPlatformCargo::UpdatePowerConnectionFromTrack(){ }
void AFGBuildableTrainPlatformCargo::Factory_Tick(float dt){ }
void AFGBuildableTrainPlatformCargo::Factory_CollectInput_Implementation(){ }
void AFGBuildableTrainPlatformCargo::Factory_PullPipeInput_Implementation(float dt){ }
void AFGBuildableTrainPlatformCargo::Factory_PushPipeOutput_Implementation(float dt){ }
bool AFGBuildableTrainPlatformCargo::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableTrainPlatformCargo::OnRep_ReplicationDetailActor(){ }
void AFGBuildableTrainPlatformCargo::OnRep_UpdateDockingStatus(){ }
bool AFGBuildableTrainPlatformCargo::FilterResourceForms(TSubclassOf< UFGItemDescriptor > itemDesc, int32 idx) const{ return bool(); }
int32 AFGBuildableTrainPlatformCargo::GetFirstIndexWithItem(UFGInventoryComponent* inventory) const{ return int32(); }
void AFGBuildableTrainPlatformCargo::TransferInventoryToTrain(){ }
void AFGBuildableTrainPlatformCargo::TransferInventoryToPlatform(){ }
void AFGBuildableTrainPlatformCargo::LoadUnloadVehicleComplete(){ }
void AFGBuildableTrainPlatformCargo::UpdateUnloadSettings(){ }
void AFGBuildableTrainPlatformCargo::UpdateLoadSettings(){ }
void AFGBuildableTrainPlatformCargo::SwapCargoContainerVisibility(){ }
void AFGBuildableTrainPlatformCargo::HidePlatformCargoContainer(){ }
void AFGBuildableTrainPlatformCargo::ShowPlatformCargoContainer(){ }
void AFGBuildableTrainPlatformCargo::OnCargoPowerStateChanged(bool hasPower){ }
FName AFGBuildableTrainPlatformCargo::mMagicBoxComponentName = FName();
FName AFGBuildableTrainPlatformCargo::mCargoMeshComponentName = FName();
