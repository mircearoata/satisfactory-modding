// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBoomBox.h"

void UFGBoomBoxRemoteCallObject::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGBoomBoxRemoteCallObject::Server_Play_Implementation( AFGBoomBox* boomBox){ }
void UFGBoomBoxRemoteCallObject::Server_Stop_Implementation( AFGBoomBox* boomBox){ }
void UFGBoomBoxRemoteCallObject::Server_ChangeTape_Implementation( AFGBoomBox* boomBox, TSubclassOf<  UFGTapeData > newTape){ }
void UFGBoomBoxRemoteCallObject::Server_NextSong_Implementation( AFGBoomBox* boomBox){ }
void UFGBoomBoxRemoteCallObject::Server_PreviousSong_Implementation( AFGBoomBox* boomBox){ }
void UFGBoomBoxRemoteCallObject::Server_SetVolumeNormalized_Implementation( AFGBoomBox* boomBox, float volume){ }
void UFGBoomBoxRemoteCallObject::SyncPlayerStateReqest( AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_SyncPlayerStateRequest_Implementation( AFGBoomBoxPlayer* player, float clientTimestamp){ }
void UFGBoomBoxRemoteCallObject::Client_SyncPlayerState_Implementation( AFGBoomBoxPlayer* player, FBoomBoxPlayerState state, float timestamp){ }
bool AFGBoomBox::NeedTransform_Implementation(){ return bool(); }
bool AFGBoomBox::ShouldSave_Implementation() const{ return bool(); }
void AFGBoomBox::ChangeTape(TSubclassOf<  UFGTapeData > newTape){ }
void AFGBoomBox::NextSong(){ }
void AFGBoomBox::PreviousSong(){ }
void AFGBoomBox::Play(){ }
void AFGBoomBox::Stop(){ }
void AFGBoomBox::SetVolumeNormalized(float volume){ }
bool AFGBoomBox::IsCurrentlyPlaying(){ return bool(); }
TSubclassOf< class UFGTapeData > AFGBoomBox::GetCurrentTape(){ return TSubclassOf<class UFGTapeData>(); }
void AFGBoomBox::RegisterStateListener(TScriptInterface<class IFGBoomboxListenerInterface> stateListener){ }
void AFGBoomBox::UnregisterStateListener(TScriptInterface<class IFGBoomboxListenerInterface > stateListener){ }
EBoomBoxPickupButtonState AFGBoomBox::GetPickupButtonState(AFGCharacterPlayer* player){ return EBoomBoxPickupButtonState(); }
void AFGBoomBox::PickUp(AFGCharacterPlayer* toPlayer){ }
void AFGBoomBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBoomBox::BeginPlay(){ }
void AFGBoomBox::SetBoomBoxPlayer( AFGBoomBoxPlayer* player){ }
AFGBoomBoxPlayer* AFGBoomBox::GetBoomBoxPlayer() const{ return nullptr; }
bool AFGBoomBox::CanBePickedUp(AFGCharacterPlayer* byCharacter) const{ return bool(); }
UFGBoomBoxRemoteCallObject* AFGBoomBox::GetRCO(){ return nullptr; }
