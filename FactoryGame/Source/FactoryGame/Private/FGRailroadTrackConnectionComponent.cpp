// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadTrackConnectionComponent.h"

UFGRailroadTrackConnectionComponent::UFGRailroadTrackConnectionComponent(){ 
	this->mTrackPosition.Track = nullptr;
	this->mTrackPosition.Offset = 0.0;
	this->mTrackPosition.Forward = 0.0;
	this->mSwitchPosition = -1;
	this->mSwitchControl = nullptr;
	this->mStation = nullptr;
	this->mFacingSignal = nullptr;
	this->mTrailingSignal = nullptr;
	this->bNetAddressable = true;
	this->SetIsReplicated(true);
}
void UFGRailroadTrackConnectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void UFGRailroadTrackConnectionComponent::OnComponentDestroyed(bool isDestroyingHierarchy){ }
void UFGRailroadTrackConnectionComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGRailroadTrackConnectionComponent::AddConnection(UFGRailroadTrackConnectionComponent* toComponent){ }
void UFGRailroadTrackConnectionComponent::RemoveConnection(UFGRailroadTrackConnectionComponent* toComponent){ }
bool UFGRailroadTrackConnectionComponent::IsFacingSwitch() const{ return bool(); }
bool UFGRailroadTrackConnectionComponent::IsTrailingSwitch() const{ return bool(); }
bool UFGRailroadTrackConnectionComponent::IsSwitchClear() const{ return bool(); }
void UFGRailroadTrackConnectionComponent::SetSwitchPosition(int32 position){ }
void UFGRailroadTrackConnectionComponent::SetSwitchPosition( AFGBuildableRailroadTrack* track){ }
TWeakPtr< FFGRailroadSignalBlock > UFGRailroadTrackConnectionComponent::GetSignalBlock() const{ return TWeakPtr<FFGRailroadSignalBlock>(); }
UFGRailroadTrackConnectionComponent* UFGRailroadTrackConnectionComponent::GetOpposite() const{ return nullptr; }
UFGRailroadTrackConnectionComponent* UFGRailroadTrackConnectionComponent::GetNext() const{ return nullptr; }
UFGRailroadTrackConnectionComponent* UFGRailroadTrackConnectionComponent::FindOverlappingConnections( UFGRailroadTrackConnectionComponent* component,
		const FVector& location,
		float radius,
		bool allowPlatformTracks,
		TArray< UFGRailroadTrackConnectionComponent* >* out_additionalSwitchConnections){ return nullptr; }
void UFGRailroadTrackConnectionComponent::SetTrackPosition(const FRailroadTrackPosition& position){ }
void UFGRailroadTrackConnectionComponent::SortConnections(){ }
void UFGRailroadTrackConnectionComponent::AddConnectionInternal(UFGRailroadTrackConnectionComponent* toComponent){ }
void UFGRailroadTrackConnectionComponent::RemoveConnectionInternal(UFGRailroadTrackConnectionComponent* toComponent){ }
void UFGRailroadTrackConnectionComponent::OnConnectionsChangedInternal(){ }
void UFGRailroadTrackConnectionComponent::ClampSwitchPosition(){ }
