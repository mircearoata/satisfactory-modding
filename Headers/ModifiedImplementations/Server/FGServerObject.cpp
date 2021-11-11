// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGServerObject.h"
#include "FGServerManager.h"

UFGServerObject::UFGServerObject(){ }
bool UFGServerObject::Join(){ return bool(); }
bool UFGServerObject::IsConnected() const{ return bool(); }
void UFGServerObject::CreateGame(const FString& SessionName, const FString& StartingLocation, bool JoinOnceLoaded){ }
void UFGServerObject::UploadSave(const  FSaveHeader& SaveHeader, bool LoadImmediately){ }
void UFGServerObject::ConsoleCommand(const FString& Command){ }
EBeaconConnectionState UFGServerObject::GetConnectionState(){ return EBeaconConnectionState(); }
void UFGServerObject::SetServerState(EServerState NewState){ }
void UFGServerObject::RegisterStateListener(TScriptInterface<  IFGServerStateListener> Listener){ }
void UFGServerObject::UnRegisterStateListener(TScriptInterface<  IFGServerStateListener> Listener){ }
EServerComplexState UFGServerObject::GetComplexState(){ return EServerComplexState(); }
void UFGServerObject::Authenticate(EPrivilegeLevel MinimumTargetedPrivilege){ }
FString UFGServerObject::PullCommandFromHistory(bool GoBackInTime){ return FString(); }
void UFGServerObject::SetAutoPause(bool AutoPause){ }
void UFGServerObject::SetAutoSaveOnDisconnect(bool AutoSave){ }
void UFGServerObject::SetAutoLoadSessionName(const FString& SessionName){ }
void UFGServerObject::ChangeAdminPassword(){ }
void UFGServerObject::FetchGameState(){ }
void UFGServerObject::ChangeClientPassword(){ }
void UFGServerObject::ChangeServerName(const FString& NewServerName){ }
void UFGServerObject::CustomSerialize(FStructuredArchive::FRecord Record, EServerManagerVersion Version){ }
void UFGServerObject::SetAuthenticationToken(const FServerAuthenticationToken& Token){ }
void UFGServerObject::SetServerName(const FString& ServerName){ }
void UFGServerObject::NotifyComplexStateChange(){ }
void UFGServerObject::ProcessServerStatePollResponse(const  FServerStatePollResponse& Beat){ }
void UFGServerObject::PollState(){ }
UFGServerManager& UFGServerObject::GetOuterServerManager() const {
  return *Cast<UFGServerManager>(GetOuter());
}
void UFGServerObject::BeginDestroy(){ Super::BeginDestroy(); }
void UFGServerObject::SaveState() const{ }
void UFGServerObject::DropConnection(){ }
void UFGServerObject::EnsureConnected(){ }
void UFGServerObject::AutoConnect(){ }
bool UFGServerObject::IsPollingServerState(){ return bool(); }
void UFGServerObject::PurgeDeadListeners(){ }
void UFGServerObject::SetGameState(const FServerGameState& NewState){ }
void UFGServerObject::SetBasicSettings(const FServerBasicSettings& Settings){ }
bool UFGServerObject::HasValidConnection() const{ return bool(); }
void UFGServerObject::ServerConnected(AFGServerBeaconClient& Connection){ }
void UFGServerObject::ServerConnectionFailure(AFGServerBeaconClient& Connection){ }
void UFGServerObject::ServerDisconnected(){ }
void UFGServerObject::ConnectionStateChanged(EBeaconConnectionState State){ }
