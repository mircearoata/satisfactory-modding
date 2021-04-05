// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryConnectionComponent.h"

UFGFactoryConnectionComponent::UFGFactoryConnectionComponent() : Super() {
	this->mConnectorClearance = 100;
	this->mInventoryAccessIndex = -1;
	this->bNetAddressable = true;
	this->SetIsReplicatedByDefault(true);
}
void UFGFactoryConnectionComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGFactoryConnectionComponent::OnComponentDestroyed(bool isDestroyingHierarchy){ }
void UFGFactoryConnectionComponent::OnRegister(){ Super::OnRegister(); }
void UFGFactoryConnectionComponent::OnUnregister(){ Super::OnUnregister(); }
void UFGFactoryConnectionComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryConnectionComponent::SetInventory( UFGInventoryComponent* inventory){ }
void UFGFactoryConnectionComponent::SetInventoryAccessIndex(int32 index){ }
void UFGFactoryConnectionComponent::SetConnection( UFGFactoryConnectionComponent* toComponent){ }
void UFGFactoryConnectionComponent::ClearConnection(){ }
bool UFGFactoryConnectionComponent::IsConnected() const{ return bool(); }
EFactoryConnectionDirection UFGFactoryConnectionComponent::GetCompatibleSnapDirection() const{ return EFactoryConnectionDirection(); }
bool UFGFactoryConnectionComponent::CanSnapTo(UFGFactoryConnectionComponent* otherConnection) const{ return bool(); }
bool UFGFactoryConnectionComponent::CanConnectTo(UFGFactoryConnectionComponent* otherConnection) const{ return bool(); }
FVector UFGFactoryConnectionComponent::GetConnectorLocation(bool withClearance) const{ return FVector(); }
bool UFGFactoryConnectionComponent::Factory_PeekOutput(TArray< FInventoryItem >& out_items, TSubclassOf<  UFGItemDescriptor > type) const{ return bool(); }
bool UFGFactoryConnectionComponent::Factory_GrabOutput(FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
bool UFGFactoryConnectionComponent::Factory_Internal_PeekOutputInventory(TArray< FInventoryItem >& out_items, TSubclassOf<  UFGItemDescriptor > type) const{ return bool(); }
bool UFGFactoryConnectionComponent::Factory_Internal_GrabOutputInventory(FInventoryItem& out_item, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
void UFGFactoryConnectionComponent::DisplayDebug(int32 connectionIndex,  UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void UFGFactoryConnectionComponent::SortComponentList(TInlineComponentArray< UFGFactoryConnectionComponent* >& io_components){ }
uint8 UFGFactoryConnectionComponent::MaxNumGrab(float delta) const{ return uint8(); }
UFGFactoryConnectionComponent* UFGFactoryConnectionComponent::FindCompatibleOverlappingConnections( UFGFactoryConnectionComponent* component,
		const FVector& location,
		float radius,
		UFGFactoryConnectionComponent* lowPrioConnection){ return nullptr; }
UFGFactoryConnectionComponent* UFGFactoryConnectionComponent::FindOverlappingConnections(UWorld* world,
		const FVector& location,
		float radius,
		EFactoryConnectionConnector connector,
		EFactoryConnectionDirection direction,
		UFGFactoryConnectionComponent* lowPrioConnection){ return nullptr; }
int32 UFGFactoryConnectionComponent::FindAllOverlappingConnections(TArray< UFGFactoryConnectionComponent* > out_Connection,
		UWorld* world,
		const FVector& location,
		float radius,
		EFactoryConnectionConnector connector,
		EFactoryConnectionDirection direction){ return int32(); }
UFGFactoryConnectionComponent* UFGFactoryConnectionComponent::CheckIfSnapOnlyIsBlockedByOtherConnection(UFGFactoryConnectionComponent* connectionToCheck,
		TArray< FOverlapResult > potentialBlockers){ return nullptr; }
