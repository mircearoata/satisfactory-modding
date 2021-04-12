// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGHologram.h"

AFGHologram::AFGHologram() : Super() {
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mLoopSound = CreateDefaultSubobject<UAkComponent>(TEXT("LoopSound")); this->mLoopSound->SetupAttachment(this->RootComponent);
}
void AFGHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGHologram::IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const{ return bool(); }
AFGHologram* AFGHologram::SpawnHologramFromRecipe(TSubclassOf<  UFGRecipe > inRecipe, AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ return nullptr; }
AFGHologram* AFGHologram::SpawnChildHologramFromRecipe(AFGHologram* parent, TSubclassOf< UFGRecipe > recipe, AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ return nullptr; }
void AFGHologram::SetRecipe(TSubclassOf<  UFGRecipe > recipe){ }
TSubclassOf< class UFGItemDescriptor > AFGHologram::GetItemDescriptor() const{ return TSubclassOf<class UFGItemDescriptor>(); }
void AFGHologram::SerializeOntoConstructHologramMessage(FConstructHologramMessage& message){ }
void AFGHologram::DeserializeFromConstructHologramMessage(FConstructHologramMessage& message,  AFGBuildGun* buildGun){ }
void AFGHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGHologram::ClientPreConstructMessageSerialization(){ }
void AFGHologram::ServerPostConstructMessageDeserialization(){ }
void AFGHologram::OnConstructMessagedDeserialized_Implementation(){ }
void AFGHologram::BeginPlay(){ }
void AFGHologram::Destroyed(){ }
void AFGHologram::SetActorHiddenInGame(bool newHidden){ }
bool AFGHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGHologram::AdjustForGround(const FHitResult& hitResult, FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
bool AFGHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGHologram::OnInvalidHitResult(){ }
void AFGHologram::ValidatePlacementAndCost( UFGInventoryComponent* inventory){ }
bool AFGHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGHologram::Scroll(int32 delta){ }
void AFGHologram::ScrollRotate(int32 delta, int32 step){ }
void AFGHologram::SetInitialScrollValue(EHologramScrollMode scrollMode, int32 scrollValue){ }
int32 AFGHologram::GetScrollValue(EHologramScrollMode scrollMode) const{ return int32(); }
void AFGHologram::SetScrollMode(EHologramScrollMode mode){ }
EHologramScrollMode AFGHologram::GetScrollMode() const{ return EHologramScrollMode(); }
bool AFGHologram::IsScrollModeSupported(EHologramScrollMode mode) const{ return bool(); }
void AFGHologram::GetSupportedScrollModes(TArray< EHologramScrollMode >* out_modes) const{ }
void AFGHologram::GetSupportedSplineModes_Implementation(TArray< EHologramSplinePathMode >& out_splineModes) const{ }
EHologramSplinePathMode AFGHologram::GetSplineMode(){ return EHologramSplinePathMode(); }
void AFGHologram::SetSplineMode(EHologramSplinePathMode  mode){ }
void AFGHologram::SetSnapToGuideLines(bool isEnabled){ }
void AFGHologram::SetPlacementMaterial(bool material){ }
bool AFGHologram::IsChanged() const{ return bool(); }
AActor* AFGHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGHologram::CanConstruct() const{ return bool(); }
bool AFGHologram::CanTakeNextBuildStep() const{ return bool(); }
AActor* AFGHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID constructionID){ return nullptr; }
void AFGHologram::OnPendingConstructionHologramCreated_Implementation( AFGHologram* fromHologram){ }
void AFGHologram::OnHologramTimeout(){ }
TArray< FItemAmount > AFGHologram::GetBaseCost() const{ return TArray<FItemAmount>(); }
int32 AFGHologram::GetBaseCostMultiplier() const{ return int32(); }
TArray< FItemAmount > AFGHologram::GetCost(bool includeChildren) const{ return TArray<FItemAmount>(); }
void AFGHologram::SetDisabled(bool disabled){ }
bool AFGHologram::IsDisabled() const{ return bool(); }
void AFGHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
void AFGHologram::AddChild(AFGHologram* child){ }
void AFGHologram::AddConstructDisqualifier(TSubclassOf<  UFGConstructDisqualifier > disqualifier){ }
void AFGHologram::GetConstructDisqualifiers(TArray< TSubclassOf<  UFGConstructDisqualifier > >& out_constructResults) const{ }
void AFGHologram::ResetConstructDisqualifiers(){ }
void AFGHologram::UpdateRotationValuesFromTransform(){ }
void AFGHologram::SetBuildClass(TSubclassOf<  AActor > buildClass){ }
void AFGHologram::OnHologramTransformUpdated(){ }
void AFGHologram::SetupClearance( UBoxComponent* boxComponent){ }
void AFGHologram::SetupClearanceDetector( UBoxComponent* boxComponent){ }
void AFGHologram::CheckValidPlacement(){ }
void AFGHologram::CheckCanAfford( UFGInventoryComponent* inventory){ }
void AFGHologram::OnSnap(){ }
void AFGHologram::OnRep_PlacementMaterial(){ }
void AFGHologram::SetMaterial( UMaterialInterface* material){ }
TSubclassOf< AActor > AFGHologram::GetActorClass() const{ return TSubclassOf<AActor>(); }
USceneComponent* AFGHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGHologram::SetIsChanged(){ }
bool AFGHologram::IsLocalHologram() const{ return bool(); }
bool AFGHologram::IsValidHitActor(AActor* hitActor) const{ return bool(); }
int32 AFGHologram::GetRotationStep() const{ return int32(); }
float AFGHologram::ApplyScrollRotationTo(float base, bool onlyUseBaseForAlignment) const{ return float(); }
void AFGHologram::SetupComponents(){ }
void AFGHologram::Client_PlaySnapSound_Implementation(){ }
void AFGHologram::OnRep_InitialScrollModeValue(){ }
const FName AFGHologram::HOLOGRAM_MESH_TAG = FName();
const FName AFGHologram::HOLOGRAM_DEPTH_MESH_TAG = FName();
