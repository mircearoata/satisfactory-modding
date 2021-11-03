// This file has been automatically generated by the Unreal Header Implementation tool

#include "Resources/FGResourceNodeBase.h"

#if WITH_EDITOR
bool AFGResourceNodeBase::IsGeyserDescButNotGeyserNode(){ return bool(); }
void AFGResourceNodeBase::PostEditChangeProperty( FPropertyChangedEvent& propertyChangedEvent){ Super::PostEditChangeProperty(propertyChangedEvent); }
void AFGResourceNodeBase::CheckForErrors(){ Super::CheckForErrors(); }
#endif 
AFGResourceNodeBase::AFGResourceNodeBase() : Super() {
	this->mResourceClass = nullptr;
	this->mDecalComponent = nullptr;
	this->mBoxComponent = nullptr;
	this->mIsOccupied = false;
	this->mIsLonerNode = false;
	this->mAllowDecal = true;
	this->mHighlightParticleSystemTemplate = nullptr;
	this->mHighlightParticleSystemComponent = nullptr;
	this->mDoSpawnParticle = true;
	this->mMeshActor = nullptr;
	this->mAddToSignificanceManager = true;
	this->mSignificanceRange = 18000.0;
}
void AFGResourceNodeBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGResourceNodeBase::PostLoad(){ Super::PostLoad(); }
void AFGResourceNodeBase::BeginPlay(){ }
void AFGResourceNodeBase::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGResourceNodeBase::GainedSignificance_Implementation(){ }
void AFGResourceNodeBase::LostSignificance_Implementation(){ }
void AFGResourceNodeBase::GainedSignificance_Native(){ }
void AFGResourceNodeBase::LostSignificance_Native(){ }
void AFGResourceNodeBase::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGResourceNodeBase::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGResourceNodeBase::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGResourceNodeBase::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGResourceNodeBase::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGResourceNodeBase::NeedTransform_Implementation(){ return bool(); }
void AFGResourceNodeBase::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
FText AFGResourceNodeBase::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGResourceNodeBase::SetIsOccupied(bool occupied){ }
bool AFGResourceNodeBase::IsOccupied() const{ return bool(); }
bool AFGResourceNodeBase::CanBecomeOccupied() const{ return bool(); }
TSubclassOf< UFGResourceDescriptor > AFGResourceNodeBase::GetResourceClass() const{ return TSubclassOf<UFGResourceDescriptor>(); }
FVector AFGResourceNodeBase::GetPlacementLocation(const FVector& hitLocation) const{ return FVector(); }
FText AFGResourceNodeBase::GetResourceName() const{ return FText(); }
EResourceForm AFGResourceNodeBase::GetResourceForm() const{ return EResourceForm(); }
void AFGResourceNodeBase::OnRep_IsOccupied(){ }
void AFGResourceNodeBase::UpdateMeshFromDescriptor(bool needRegister){ }
void AFGResourceNodeBase::AddRevealedOnMapBy(UObject* newObject){ }
void AFGResourceNodeBase::RemoveRevealedOnMapBy(UObject* oldObject){ }
void AFGResourceNodeBase::InitResource(TSubclassOf<UFGResourceDescriptor> resourceClass){ }
void AFGResourceNodeBase::ConditionallySetupComponents(bool needRegister){ }
void AFGResourceNodeBase::UpdateHighlightParticleSystem(){ }