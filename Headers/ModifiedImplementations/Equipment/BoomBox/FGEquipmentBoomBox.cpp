// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGEquipmentBoomBox.h"

AFGEquipmentBoomBox::AFGEquipmentBoomBox(){ }
void AFGEquipmentBoomBox::PutDown(){ }
void AFGEquipmentBoomBox::Inspect(){ }
void AFGEquipmentBoomBox::FireTurboBass(){ }
void AFGEquipmentBoomBox::ChangeTape(TSubclassOf<  UFGTapeData > newTape){ }
void AFGEquipmentBoomBox::NextSong(){ }
void AFGEquipmentBoomBox::PreviousSong(){ }
void AFGEquipmentBoomBox::Play(){ }
void AFGEquipmentBoomBox::Stop(){ }
void AFGEquipmentBoomBox::SetVolumeNormalized(float volume){ }
bool AFGEquipmentBoomBox::IsCurrentlyPlaying(){ return bool(); }
TSubclassOf< class UFGTapeData > AFGEquipmentBoomBox::GetCurrentTape(){ return TSubclassOf<class UFGTapeData>(); }
void AFGEquipmentBoomBox::RegisterStateListener(TScriptInterface<class IFGBoomboxListenerInterface> stateListener){ }
void AFGEquipmentBoomBox::UnregisterStateListener(TScriptInterface<class IFGBoomboxListenerInterface > stateListener){ }
void AFGEquipmentBoomBox::PutDownNearPlayer(){ }
void AFGEquipmentBoomBox::SetBoomBoxPlayer( AFGBoomBoxPlayer* player){ }
void AFGEquipmentBoomBox::Client_PlayPressPlayEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlayPressStopEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlayInspectEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlayLoadTapeEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlaySwitchTapeEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlayPressNextEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlayPressPreviousEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlayTurboBassEffects_Implementation(){ }
void AFGEquipmentBoomBox::Client_PlayFireTurboBassEffects_Implementation(){ }
void AFGEquipmentBoomBox::Server_Inspect_Implementation(){ }
void AFGEquipmentBoomBox::Server_ChangeTape_Implementation(TSubclassOf< UFGTapeData > newTape){ }
void AFGEquipmentBoomBox::Server_Play_Implementation(){ }
void AFGEquipmentBoomBox::Server_Stop_Implementation(){ }
void AFGEquipmentBoomBox::Server_FireTurboBass_Implementation(){ }
void AFGEquipmentBoomBox::Server_NextSong_Implementation(){ }
void AFGEquipmentBoomBox::Server_PreviousSong_Implementation(){ }
void AFGEquipmentBoomBox::Server_LoadTapeNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_EjectTapeNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_PlayNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_StopNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_TogglePlaybackNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_NextNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_PrevNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_FireTurboBassNow_Implementation(){ }
void AFGEquipmentBoomBox::Server_PutDown_Implementation(const FTransform& transform){ }
void AFGEquipmentBoomBox::Server_SetVolumeNormalized_Implementation(float volume){ }
UAkComponent* AFGEquipmentBoomBox::GetAkComponent(){ return nullptr; }
void AFGEquipmentBoomBox::FireTurboBassLogics(){ }
void AFGEquipmentBoomBox::LoadTapeNow(){ }
void AFGEquipmentBoomBox::EjectTapeNow(){ }
void AFGEquipmentBoomBox::PlayNow(){ }
void AFGEquipmentBoomBox::StopNow(){ }
void AFGEquipmentBoomBox::NextNow(){ }
void AFGEquipmentBoomBox::PrevNow(){ }
void AFGEquipmentBoomBox::FireTurboBassNow(){ }
void AFGEquipmentBoomBox::TogglePlaybackNow(){ }
void AFGEquipmentBoomBox::PutDownImpl(const FTransform& transform){ }
void AFGEquipmentBoomBox::WasEquipped_Implementation(){ }
void AFGEquipmentBoomBox::WasUnEquipped_Implementation(){ }
void AFGEquipmentBoomBox::WasRemovedFromSlot_Implementation(){ }
void AFGEquipmentBoomBox::BeginPlay(){ }
void AFGEquipmentBoomBox::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGEquipmentBoomBox::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGEquipmentBoomBox::ShouldSaveState() const{ return bool(); }
