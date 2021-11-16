// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameState.h"

AFGGameState::AFGGameState() : Super() {
	this->mTurboModeMultiplier = 0.0;
	this->mPowerCircuitFuseTriggeredMessage = nullptr;
	this->mTimeSubsystem = nullptr;
	this->mStorySubsystem = nullptr;
	this->mRailroadSubsystem = nullptr;
	this->mCircuitSubsystem = nullptr;
	this->mRecipeManager = nullptr;
	this->mSchematicManager = nullptr;
	this->mGamePhaseManager = nullptr;
	this->mResearchManager = nullptr;
	this->mTutorialIntroManager = nullptr;
	this->mActorRepresentationManager = nullptr;
	this->mMapManager = nullptr;
	this->mRadioactivitySubsystem = nullptr;
	this->mChatManager = nullptr;
	this->mCentralStorageSubsystem = nullptr;
	this->mPipeSubsystem = nullptr;
	this->mUnlockSubsystem = nullptr;
	this->mResourceSinkSubsystem = nullptr;
	this->mItemRegrowSubsystem = nullptr;
	this->mVehicleSubsystem = nullptr;
	this->mEventSubsystem = nullptr;
	this->mWorldGridSubsystem = nullptr;
	this->mDroneSubsystem = nullptr;
	this->mStatisticsSubsystem = nullptr;
	this->mSignSubsystem = nullptr;
	this->mPlayDurationWhenLoaded = 0;
	this->mReplicatedSessionName = TEXT("");
	this->mReplicadedOnlineNumPubliclConnections = 0;
	this->mUnlockCustomizerSchematic = nullptr;
	this->mPlannedRestartTime = 24.0;
	this->mHubPartClass = nullptr;
	this->mForceAddHubPartOnSpawn = false;
	this->mCheatNoCost = false;
	this->mCheatNoPower = false;
	this->mCheatNoFuel = false;
	this->mIsTradingPostBuilt = false;
	this->mHasInitalTradingPostLandAnimPlayed = false;
	this->mIsSpaceElevatorBuilt = false;
	this->mServerLocalDateTimeTicksAtInit = 0LL;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = true;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 5.0;
}
void AFGGameState::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGGameState::Tick(float delta){ }
void AFGGameState::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGGameState::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGGameState::NeedTransform_Implementation(){ return bool(); }
bool AFGGameState::ShouldSave_Implementation() const{ return bool(); }
void AFGGameState::HandleMatchIsWaitingToStart(){ }
void AFGGameState::HandleMatchHasStarted(){ }
void AFGGameState::AddPlayerState( APlayerState* playerState){ }
void AFGGameState::Init(){ }
bool AFGGameState::AreClientSubsystemsValid(){ return bool(); }
int32 AFGGameState::FindFreeSlot( AFGPlayerState* playerState){ return int32(); }
bool AFGGameState::IsTradingPostBuilt() const{ return bool(); }
bool AFGGameState::HasInitalTradingPostLandAnimPlayed() const{ return bool(); }
void AFGGameState::SetHasInitalTradingPostLandAnimPlayed(){ }
bool AFGGameState::IsSpaceElevatorBuilt() const{ return bool(); }
void AFGGameState::GetVisitedMapAreas(TArray< TSubclassOf< UFGMapArea > >& out_VisitedAreas){ }
bool AFGGameState::IsMapAreaVisisted(TSubclassOf< UFGMapArea > inArea){ return bool(); }
void AFGGameState::AddUniqueVisistedMapArea(TSubclassOf< UFGMapArea > mapArea){ }
void AFGGameState::OnRep_MapAreaVisited(){ }
void AFGGameState::NotifyPlayerAdded( AFGCharacterPlayer* inPlayer){ }
void AFGGameState::SendMessageToAllPlayers(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGGameState::SendMessageToPlayer(TSubclassOf<  UFGMessageBase > inMessage,  APlayerController* controller){ }
int32 AFGGameState::GetTotalPlayDuration() const{ return int32(); }
void AFGGameState::SetSessionName(const FString& inName){ }
void AFGGameState::SetupColorSlots_Data(const TArray< FFactoryCustomizationColorSlot >& colorSlotsPrimary_Data){ }
void AFGGameState::Server_SetBuildingColorDataForSlot_Implementation(uint8 slotIdx, FFactoryCustomizationColorSlot colorData){ }
void AFGGameState::RemovePlayerColorPresetAtIndex(int32 index){ }
void AFGGameState::AddPlayerColorPreset(FText presetName, FLinearColor color){ }
FLinearColor AFGGameState::GetBuildingColorPrimary_Linear(uint8 slot){ return FLinearColor(); }
FLinearColor AFGGameState::GetBuildingColorSecondary_Linear(uint8 slot){ return FLinearColor(); }
void AFGGameState::Server_SetBuildableLightColorSlot_Implementation(uint8 slotIdx, FLinearColor color){ }
FFactoryCustomizationColorSlot AFGGameState::GetBuildingColorDataForSlot(uint8 slot){ return FFactoryCustomizationColorSlot(); }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Swatch > AFGGameState::GetCurrentSwatchForSwatchGroup(TSubclassOf< UFGSwatchGroup > swatchGroup){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Swatch>(); }
void AFGGameState::OnRep_BuildingColorSlot_Data(){ }
void AFGGameState::OnRep_BuildableLightColorSlots(){ }
void AFGGameState::ClaimPlayerColor( AFGPlayerState* playerState){ }
void AFGGameState::ReleasePlayerColor( AFGPlayerState* playerState){ }
void AFGGameState::ItemPickedUp(TSubclassOf<  UFGItemDescriptor > itemClass){ }
void AFGGameState::SetPlannedServerRestartWorldTime(float worldTimeSeconds){ }
FDateTime AFGGameState::GetServerLocalDateTime() const{ return FDateTime(); }
void AFGGameState::OnRep_OnlineSessionVisibility(){ }
bool AFGGameState::IsCustomizerRecipeUnlocked(){ return bool(); }
void AFGGameState::SetDefaultSwatchForBuildableGroup(TSubclassOf<  UFGSwatchGroup > swatchGroup, TSubclassOf<  UFGFactoryCustomizationDescriptor_Swatch> swatch){ }
void AFGGameState::CheckRestartTime(){ }
void AFGGameState::OnRep_PlannedRestartTime(){ }
