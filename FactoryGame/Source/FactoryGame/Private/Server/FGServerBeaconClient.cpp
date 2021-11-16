// This file has been automatically generated by the Unreal Header Implementation tool

#include "Server/FGServerBeaconClient.h"

UWorld* UFGBaseServerInteractionHandler::GetWorld() const{ return nullptr; }
FText UFGBaseServerInteractionHandler::GetServerMessageDescription(EServerMessage Message){ return FText(); }
FLargeDataTransfer::FLargeDataTransfer(const TArray<uint8>& Data, FOnTransferCompletedInternal OnTransferCompletedInternal, FOnTransferCompleted OnTransferCompleted, FOnTransferProgress OnTransferProgress) : mNumChunks(0) { }
FLargeDataTransfer::FLargeDataTransfer(const FGuid& ID, int32 Size) : mNumChunks(0) { }
bool FLargeDataTransfer::operator==(const FLargeDataTransfer& Other) const{ return bool(); }
TArray<uint8> FLargeDataTransfer::GetChunk(int32 Chunk) const{ return TArray<uint8>(); }
bool FLargeDataTransfer::SetChunk(int32 Chunk, const TArray<uint8>& ChunkData){ return bool(); }
int32 FLargeDataTransfer::NumChunks() const{ return int32(); }
int32 FLargeDataTransfer::NumTransferredChunks() const{ return int32(); }
void FLargeDataTransfer::ChunkTransferred(){ }
const FGuid& FLargeDataTransfer::GetID() const{ return *(new FGuid); }
const FOnTransferCompleted& FLargeDataTransfer::OnTransferCompleted() const{ return *(new FOnTransferCompleted); }
const FOnTransferProgress& FLargeDataTransfer::OnTransferProgress() const{ return *(new FOnTransferProgress); }
const FOnTransferCompletedInternal& FLargeDataTransfer::OnTransferCompletedInternal() const{ return *(new FOnTransferCompletedInternal); }
void AFGServerBeaconClient::Connect( UFGServerObject* ServerInfoObject, TScriptInterface<IFGDedicatedServerUIProxy> UIProxy){ }
void AFGServerBeaconClient::JoinGame(FOnJoinRequestAccepted OnJoinRequestAccepted){ }
void AFGServerBeaconClient::ChangeAdminPassword_Implementation(){ }
void AFGServerBeaconClient::ChangeClientPassword_Implementation(){ }
void AFGServerBeaconClient::CancelOperation_Implementation(){ }
void AFGServerBeaconClient::UploadSaveGame(const FSaveHeader& SaveGame, FOnTransferCompleted CompleteDelegate, FOnTransferProgress ProgressDelegate){ }
bool AFGServerBeaconClient::HasOngoingTransfers() const{ return bool(); }
void AFGServerBeaconClient::Shutdown_Server_Implementation(){ }
void AFGServerBeaconClient::ConsoleCommand(const FString& Command, FOnServerCommandExecuted OnCompletion){ }
void AFGServerBeaconClient::QueryServerState(){ }
void AFGServerBeaconClient::CreateGame_Server_Implementation(const FString& Name, const FString& StartLoc){ }
void AFGServerBeaconClient::AuthenticationRequest_Implementation(const FServerAuthenticationToken &CurrentAuth, EPrivilegeLevel MinimumPrivilege){ }
void AFGServerBeaconClient::GameStateUpdate_Implementation(const FServerGameState& Response){ }
void AFGServerBeaconClient::BasicSettingsUpdate_Implementation(const FServerBasicSettings& BasicSettings){ }
void AFGServerBeaconClient::SetAutoPause_Implementation(bool AutoPause){ }
bool AFGServerBeaconClient::SetAutoPause_Validate(bool AutoPause){ return bool(); }
void AFGServerBeaconClient::SetAutoSaveOnDisconnect_Implementation(bool AutoSaveOnDisconnect){ }
bool AFGServerBeaconClient::SetAutoSaveOnDisconnect_Validate(bool AutoSaveOnDisconnect){ return bool(); }
void AFGServerBeaconClient::SetAutoLoadSessionName_Implementation(const FString &SessionName){ }
bool AFGServerBeaconClient::SetAutoLoadSessionName_Validate(const FString &SessionName){ return bool(); }
void AFGServerBeaconClient::RenameServer_Implementation(const FString& ServerName){ }
void AFGServerBeaconClient::EnumerateSaveSessions(FOnEnumerateSessionsComplete OnCompletion, void* UserData){ }
void AFGServerBeaconClient::SaveGame(const FString& SaveName, FOnServerOperationCompleted OnCompletion){ }
void AFGServerBeaconClient::DeleteSaveFile(const FSaveHeader& SaveGame, FOnDeleteSaveGameComplete CompleteDelegate, void* UserData){ }
void AFGServerBeaconClient::DeleteSaveSession(const FSessionSaveStruct& Session, FOnDeleteSaveGameComplete CompleteDelegate, void* UserData){ }
void AFGServerBeaconClient::LoadSaveFile_Implementation(const FSaveHeader& SaveGame){ }
void AFGServerBeaconClient::OnConnected(){ }
void AFGServerBeaconClient::OnFailure(){ }
void AFGServerBeaconClient::OnNetCleanup(UNetConnection* Connection){ }
void AFGServerBeaconClient::SetConnectionState(EBeaconConnectionState NewConnectionState){ }
void AFGServerBeaconClient::TryPassword(const FString& Password, EPrivilegeLevel MinimumTargetPrivilege){ }
void AFGServerBeaconClient::SetAdminPassword(const FString& Password){ }
void AFGServerBeaconClient::CreateGame(const FString& Name, const FString& StartLoc){ }
void AFGServerBeaconClient::SetClientPassword(const FString& Password){ }
void AFGServerBeaconClient::LargeDataTransfer_Begin_C2S_Implementation(const FGuid& TransferID, int32 TransferSize){ }
void AFGServerBeaconClient::LargeDataTransfer_AcknowledgeBegin_C2S_Implementation(const FGuid& TransferID){ }
void AFGServerBeaconClient::LargeDataTransfer_Chunk_C2S_Implementation(const FGuid& TransferID, int32 ChunkIx, const TArray<uint8>& ChunkData){ }
bool AFGServerBeaconClient::LargeDataTransfer_Chunk_C2S_Validate(const FGuid& TransferID, int32 ChunkIx, const TArray<uint8>& ChunkData){ return bool(); }
void AFGServerBeaconClient::LargeDataTransfer_AcknowledgeChunk_C2S_Implementation(const FGuid& TransferID, int32 ChunkIx){ }
void AFGServerBeaconClient::LargeDataTransfer_Cleanup_C2S_Implementation(const FGuid& TransferID){ }
bool AFGServerBeaconClient::LargeDataTransfer_Cleanup_C2S_Validate(const FGuid& TransferID){ return bool(); }
void AFGServerBeaconClient::Request_WriteRawBufferToSaveFile_Server_Implementation(const FGuid& BufferID, const FString& SaveName, bool CleanTransfer){ }
void AFGServerBeaconClient::Response_WriteRawBufferToSaveFile_Server_Implementation(const FGuid& BufferID, bool Success, const FText& Error){ }
FLargeDataTransfer* AFGServerBeaconClient::GetTransfer(FGuid ID){ return nullptr; }
void AFGServerBeaconClient::DropTransfer(FGuid ID){ }
bool AFGServerBeaconClient::ParseURL(const FString &URL, FString& Host, int16& Port){ return bool(); }
void AFGServerBeaconClient::JoinGameRequest_Server_Implementation(){ }
void AFGServerBeaconClient::JoinGameResponse_Implementation(int32 ListenPort, FServerEntryToken Ticket){ }
void AFGServerBeaconClient::SetClientPassword_Server_Implementation(const FString& NewJoinPassword){ }
void AFGServerBeaconClient::SetAdminPassword_Server_Implementation(const FString& NewHashedPassword){ }
void AFGServerBeaconClient::ClientHello_Implementation(const FServerAuthenticationToken& Cookie){ }
void AFGServerBeaconClient::ServerHello_Implementation(const FString& ServerName, const FServerAuthenticationToken& Cookie){ }
void AFGServerBeaconClient::UpdateAuthToken_Implementation(const FServerAuthenticationToken& Cookie){ }
void AFGServerBeaconClient::UpdateServerName_Implementation(const FString& NewName){ }
void AFGServerBeaconClient::TryPassword_Server_Implementation(const FString& HashedPassword, EPrivilegeLevel MinimumTargetPrivilege){ }
void AFGServerBeaconClient::RequestPassword_Implementation(EPrivilegeLevel MinimumPrivilege){ }
void AFGServerBeaconClient::ServerMessage_Implementation(EServerMessage Message){ }
void AFGServerBeaconClient::Command_Server_Implementation(const FGuid& ID, const FString& Command){ }
void AFGServerBeaconClient::CommandCompleted_Implementation(const FGuid& ID, const FString& Result){ }
void AFGServerBeaconClient::GreetAsUnclaimedServer_Implementation(){ }
void AFGServerBeaconClient::RequestSetAdminPassword_Implementation(){ }
void AFGServerBeaconClient::RequestSetClientPassword_Implementation(){ }
void AFGServerBeaconClient::RequestCreateGame_Implementation(){ }
void AFGServerBeaconClient::PasswordRejected_Implementation(){ }
void AFGServerBeaconClient::QueryServerState_Server_Implementation(){ }
void AFGServerBeaconClient::Request_EnumerateSessions_Implementation(const FGuid& RequestID){ }
void AFGServerBeaconClient::Response_EnumerateSessions_Implementation(const FGuid& RequestID, bool Success, const TArray<FSessionSaveStruct> &Sessions, int32 CurrentSessionIx){ }
void AFGServerBeaconClient::SaveGameRequest_Implementation(const FGuid& RequestID, const FString& SaveName){ }
void AFGServerBeaconClient::SaveGameResponse_Implementation(const FGuid& RequestID, bool Success, const FText& ErrorMessage){ }
void AFGServerBeaconClient::DeleteSaveFileRequest_Implementation(const FGuid& RequestID, const FSaveHeader& SaveGame){ }
void AFGServerBeaconClient::DeleteSaveFileResponse_Implementation(const FGuid& RequestID, bool Success){ }
void AFGServerBeaconClient::DeleteSaveSessionRequest_Implementation(const FGuid& RequestID, const FSessionSaveStruct& Session){ }
void AFGServerBeaconClient::DeleteSaveSessionResponse_Implementation(const FGuid& RequestID, bool Success){ }
void AFGServerBeaconClient::Notify_SavesCollectionChanged_Implementation(){ }
void AFGServerBeaconClient::PasswordPrompt(EPrivilegeLevel MinimumTargetPrivilege){ }
