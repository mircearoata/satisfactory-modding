// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildGun.h"

UFGBuildGunState::UFGBuildGunState(){ }
bool UFGBuildGunState::ReplicateSubobjects( UActorChannel* channel,  FOutBunch* bunch, FReplicationFlags* repFlags){ return bool(); }
bool UFGBuildGunState::IsSupportedForNetworking() const{ return bool(); }
int32 UFGBuildGunState::GetFunctionCallspace(UFunction* Function, FFrame* Stack){ return int32(); }
bool UFGBuildGunState::CallRemoteFunction(UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack){ return bool(); }
bool UFGBuildGunState::HasAuthority() const{ return bool(); }
UWorld* UFGBuildGunState::GetWorld() const{ return nullptr; }
void UFGBuildGunState::BeginState_Implementation(){ }
void UFGBuildGunState::EndState_Implementation(){ }
void UFGBuildGunState::TickState_Implementation(float deltaTime){ }
void UFGBuildGunState::PrimaryFire_Implementation(){ }
void UFGBuildGunState::PrimaryFireRelease_Implementation(){ }
void UFGBuildGunState::SecondaryFire_Implementation(){ }
void UFGBuildGunState::ModeSelectPressed_Implementation(){ }
void UFGBuildGunState::ModeSelectRelease_Implementation(){ }
void UFGBuildGunState::BuildSamplePressed_Implementation(){ }
bool UFGBuildGunState::IsValidBuildingSample( AFGBuildable* buildable) const{ return bool(); }
void UFGBuildGunState::OnRecipeSampled_Implementation(TSubclassOf<class UFGRecipe> recipe){ }
void UFGBuildGunState::BuildSampleRelease_Implementation(){ }
void UFGBuildGunState::ScrollDown_Implementation(){ }
void UFGBuildGunState::ScrollUp_Implementation(){ }
void UFGBuildGunState::ChangeScrollMode_Implementation(){ }
void UFGBuildGunState::ChangeNoSnapMode_Implementation(){ }
void UFGBuildGunState::ChangeGuideLinesSnapMode_Implementation(bool enabled){ }
AFGBuildGun* UFGBuildGunState::GetBuildGun() const{ return nullptr; }
float UFGBuildGunState::GetBuildGunDelayPercentage() const{ return float(); }
void UFGBuildGunState::BeginBuildGunDelay(){ }
void UFGBuildGunState::ResetBuildGunDelay(){ }
bool UFGBuildGunState::BuildGunDelayIsComplete(){ return bool(); }
bool UFGBuildGunState::HasBuildGunDelay(){ return bool(); }
AFGBuildGun::AFGBuildGun() : Super() {
	this->mBuildDistanceMax = 10000;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->mArmAnimation = EArmEquipment::AE_BuildGun;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
void AFGBuildGun::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGBuildGun::ReplicateSubobjects( UActorChannel* channel,  FOutBunch* bunch, FReplicationFlags* repFlags){ return bool(); }
void AFGBuildGun::BeginPlay(){ }
void AFGBuildGun::Tick(float dt){ }
bool AFGBuildGun::ShouldSaveState() const{ return bool(); }
void AFGBuildGun::Equip( AFGCharacterPlayer* character){ }
void AFGBuildGun::UnEquip(){ }
void AFGBuildGun::GetAvailableRecipes(TArray< TSubclassOf<  UFGRecipe > >& out_recipes) const{ }
TArray< FItemAmount > AFGBuildGun::GetCostForRecipe(TSubclassOf<  UFGRecipe > recipe) const{ return TArray<FItemAmount>(); }
UFGInventoryComponent* AFGBuildGun::GetInventory() const{ return nullptr; }
float AFGBuildGun::GetCurrentBuildGunDelayPercentage() const{ return float(); }
FText AFGBuildGun::GetCurrentBuildGunDelayMessage() const{ return FText(); }
bool AFGBuildGun::CompareActiveRecipeTo(TSubclassOf<  UFGRecipe > recipe){ return bool(); }
bool AFGBuildGun::IsInState(EBuildGunState inState){ return bool(); }
void AFGBuildGun::OnPrimaryFirePressed(){ }
void AFGBuildGun::OnPrimaryFireReleased(){ }
void AFGBuildGun::OnSecondaryFirePressed(){ }
void AFGBuildGun::OnSecondaryFireReleased(){ }
void AFGBuildGun::OnModeSelectPressed(){ }
void AFGBuildGun::OnModeSelectReleased(){ }
void AFGBuildGun::OnScrollDownPressed(){ }
void AFGBuildGun::OnScrollUpPressed(){ }
void AFGBuildGun::OnScrollModePressed(){ }
void AFGBuildGun::OnNoSnapModePressed(){ }
void AFGBuildGun::OnSnapToGuideLinesPressed(){ }
void AFGBuildGun::OnSnapToGuideLinesReleased(){ }
void AFGBuildGun::OnDismantleToggleMultiSelectStatePressed(){ }
void AFGBuildGun::OnDismantleToggleMultiSelectStateReleased(){ }
void AFGBuildGun::OnBuildSamplePressed(){ }
void AFGBuildGun::OnBuildSampleReleased(){ }
void AFGBuildGun::GotoMenuState(){ }
void AFGBuildGun::GotoBuildState(TSubclassOf<  UFGRecipe > recipe){ }
void AFGBuildGun::GotoDismantleState(){ }
void AFGBuildGun::SetAllowRayCleranceHit(bool allow){ }
void AFGBuildGun::AddEquipmentActionBindings(){ }
void AFGBuildGun::Server_PrimaryFire_Implementation(){ }
bool AFGBuildGun::Server_PrimaryFire_Validate(){ return bool(); }
void AFGBuildGun::Server_SecondaryFire_Implementation(){ }
bool AFGBuildGun::Server_SecondaryFire_Validate(){ return bool(); }
void AFGBuildGun::Server_ScrollDown_Implementation(){ }
bool AFGBuildGun::Server_ScrollDown_Validate(){ return bool(); }
void AFGBuildGun::Server_ScrollUp_Implementation(){ }
bool AFGBuildGun::Server_ScrollUp_Validate(){ return bool(); }
void AFGBuildGun::Server_ScrollMode_Implementation(){ }
bool AFGBuildGun::Server_ScrollMode_Validate(){ return bool(); }
void AFGBuildGun::Server_NoSnapMode_Implementation(){ }
bool AFGBuildGun::Server_NoSnapMode_Validate(){ return bool(); }
void AFGBuildGun::Server_GotoBuildState_Implementation(TSubclassOf<  UFGRecipe > recipe){ }
bool AFGBuildGun::Server_GotoBuildState_Validate(TSubclassOf<  UFGRecipe > recipe){ return bool(); }
void AFGBuildGun::GotoState(EBuildGunState state){ }
void AFGBuildGun::Server_GotoState_Implementation(EBuildGunState state){ }
bool AFGBuildGun::Server_GotoState_Validate(EBuildGunState state){ return bool(); }
void AFGBuildGun::GotoStateInternal(EBuildGunState state){ }
