// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableTrainPlatformCargo.h"

AFGBuildableTrainPlatformCargo::AFGBuildableTrainPlatformCargo(){ }
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
