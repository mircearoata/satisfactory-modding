// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildable.h"

#if WITH_EDITOR
void AFGBuildable::CheckForErrors(){ Super::CheckForErrors(); }
#endif 
#if STATS
#endif 
#if WITH_EDITOR
void AFGBuildable::SetBuildableDisplayName(TSubclassOf< AFGBuildable > inClass, FText displayName){ }
#endif 
void AFGBuildable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildable::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildable::AFGBuildable(){ }
void AFGBuildable::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGBuildable::OnConstruction(const FTransform& transform){ }
void AFGBuildable::BeginPlay(){ }
void AFGBuildable::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildable::Destroyed(){ }
void AFGBuildable::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGBuildable::NeedTransform_Implementation(){ return bool(); }
bool AFGBuildable::ShouldSave_Implementation() const{ return bool(); }
void AFGBuildable::SetColorSlot_Implementation(uint8 newColor){ }
uint8 AFGBuildable::GetColorSlot_Implementation(){ return uint8(); }
void AFGBuildable::SetColorSlot_PreBeginPlay(uint8 newColor){ }
FLinearColor AFGBuildable::GetPrimaryColor_Implementation(){ return FLinearColor(); }
FLinearColor AFGBuildable::GetSecondaryColor_Implementation(){ return FLinearColor(); }
bool AFGBuildable::GetCanBeColored_Implementation(){ return bool(); }
void AFGBuildable::StartIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildable::StopIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildable::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGBuildable::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildable::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGBuildable::IsUseable_Implementation() const{ return bool(); }
void AFGBuildable::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGBuildable::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGBuildable::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildable::RegisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGBuildable::UnregisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGBuildable::EnablePrimaryTickFunctions(bool enable){ }
void AFGBuildable::TickFactory(float dt, ELevelTick TickType){ }
void AFGBuildable::Factory_Tick(float dt){ }
bool AFGBuildable::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildable::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
FVector AFGBuildable::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGBuildable::PreUpgrade_Implementation(){ }
void AFGBuildable::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildable::Dismantle_Implementation(){ }
void AFGBuildable::StartIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildable::StopIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildable::StartIsLookedAtForConnection( AFGCharacterPlayer* byCharacter,  UFGCircuitConnectionComponent* overlappingConnection){ }
void AFGBuildable::StopIsLookedAtForConnection( AFGCharacterPlayer* byCharacter){ }
TSubclassOf< class UFGItemDescriptor > AFGBuildable::GetBuiltWithDescriptor() const{ return TSubclassOf<class UFGItemDescriptor>(); }
void AFGBuildable::TurnOffAndDestroy(){ }
const TArray< class UMeshComponent* >& AFGBuildable::GetMainMeshes(){ return *(new TArray< class UMeshComponent* >); }
void AFGBuildable::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildable::Stat_Cost(TArray< FItemAmount >& out_amount) const{ }
void AFGBuildable::Stat_StockInventory(TArray< FItemAmount >& out_amount) const{ }
void AFGBuildable::PlayBuildEffects(AActor* inInstigator){ }
void AFGBuildable::ExecutePlayBuildEffects(){ }
void AFGBuildable::OnBuildEffectFinished(){ }
void AFGBuildable::PlayDismantleEffects_Implementation(){ }
void AFGBuildable::OnDismantleEffectFinished(){ }
UFGMaterialEffect_Build* AFGBuildable::GetActiveBuildEffect(){ return nullptr; }
bool AFGBuildable::CanBeSampled_Implementation() const{ return bool(); }
void AFGBuildable::ShowHighlightEffect(){ }
void AFGBuildable::RemoveHighlightEffect(){ }
void AFGBuildable::SetHiddenIngameAndHideInstancedMeshes(bool hide){ }
TSubclassOf< AFGBuildable > AFGBuildable::GetBuildableClassFromRecipe(TSubclassOf<  UFGRecipe > inRecipe){ return TSubclassOf<AFGBuildable>(); }
UShapeComponent* AFGBuildable::GetClearanceComponent(){ return nullptr; }
uint8 AFGBuildable::GetNumPowerConnections() const{ return uint8(); }
uint8 AFGBuildable::GetNumFactoryConnections() const{ return uint8(); }
uint8 AFGBuildable::GetNumFactoryOuputConnections() const{ return uint8(); }
bool AFGBuildable::ShouldBeConsideredForBase_Implementation(){ return bool(); }
void AFGBuildable::Native_OnMaterialInstancesUpdated(){ }
void AFGBuildable::PlayConstructSound_Implementation(){ }
void AFGBuildable::PlayDismantleSound_Implementation(){ }
void AFGBuildable::RegisterInteractingPlayerWithCircuit( AFGCharacterPlayer* player){ }
void AFGBuildable::UnregisterInteractingPlayerWithCircuit( AFGCharacterPlayer* player){ }
void AFGBuildable::OnReplicatingDetailsChanged(){ }
bool AFGBuildable::Factory_PeekOutput_Implementation(const  UFGFactoryConnectionComponent* connection, TArray< FInventoryItem >& out_items, TSubclassOf< UFGItemDescriptor > type) const{ return bool(); }
bool AFGBuildable::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
uint8 AFGBuildable::MaxNumGrab(float delta) const{ return uint8(); }
uint8 AFGBuildable::EstimatedMaxNumGrab_Threadsafe(float estimatedDeltaTime) const{ return uint8(); }
bool AFGBuildable::VerifyDefaults(FString& out_message){ return bool(); }
int32 AFGBuildable::GetCostMultiplierForLength(float totalLength, float costSegmentLength){ return int32(); }
void AFGBuildable::GetDismantleRefundReturns(TArray< FInventoryStack >& out_returns) const{ }
int32 AFGBuildable::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildable::GetDismantleInventoryReturns(TArray< FInventoryStack >& out_returns) const{ }
void AFGBuildable::TogglePendingDismantleMaterial(bool enabled){ }
void AFGBuildable::ReapplyColorSlot(){ }
bool AFGBuildable::HasMaterialInstanceManagerForMaterialName(const FString& lookupName){ return bool(); }
UFGFactoryMaterialInstanceManager* AFGBuildable::GetMaterialInstanceManagerForMaterialName(const FString& lookupName){ return nullptr; }
bool AFGBuildable::AddMaterialInstanceManagerForMaterialName(const FString& lookupName,  UFGFactoryMaterialInstanceManager* materialInstanceManager){ return bool(); }
void AFGBuildable::CleanUpMaterialInstanceMappingsInSubsystem(){ }
void AFGBuildable::CreateFactoryStatID() const{ }
void AFGBuildable::SetReplicateDetails(bool replicateDetails){ }
bool AFGBuildable::CheckFactoryConnectionComponents(FString& out_message){ return bool(); }
void AFGBuildable::OnRep_ColorSlot(){ }
void AFGBuildable::OnRep_DidFirstTimeUse(){ }
FOnReplicationDetailActorStateChange AFGBuildable::OnBuildableReplicationDetailActorStateChange = FOnReplicationDetailActorStateChange();
FOnRegisteredPlayerChanged AFGBuildable::OnRegisterPlayerChange = FOnRegisteredPlayerChanged();
