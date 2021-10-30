// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPipelineHologram.h"
#include "Components/SplineComponent.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGPipelineHologram::AFGPipelineHologram(){ 
	this->mChildPoleHologram = nullptr;
	this->mConnectionComponents[0] = nullptr;
	this->mConnectionComponents[1] = nullptr;
	this->mSnappedConnectionComponents[0] = nullptr;
	this->mSnappedConnectionComponents[1] = nullptr;
	this->mUpgradedPipeline = nullptr;
	this->mDefaultPipelineSupportRecipe = nullptr;
	this->mBendRadius = 199.0;
	this->mBendRadius2D = 199.0;
	this->mMinBendRadius = 75.0;
	this->mMaxSplineLength = 5600.1;
	this->mConnectionArrowComponent = nullptr;
	this->mBuildModeAuto = nullptr;
	this->mBuildModeAuto2D = nullptr;
	this->mBuildModeNoodle = nullptr;
	this->mBuildModeHorzToVert = nullptr;
	this->mMesh = nullptr;
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("mSplineComponent"));
	this->mLoopSound = CreateDefaultSubobject<UAkComponent>(TEXT("LoopSound"));
	this->mBuildModeCategory = EHologramBuildModeCategory::HBMC_Pipe;
	this->mUseBuildClearanceOverlapSnapp = false;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mSplineComponent->SetupAttachment(RootComponent);
	this->mLoopSound->SetupAttachment(RootComponent);
}
void AFGPipelineHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGPipelineHologram::BeginPlay(){ }
bool AFGPipelineHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGPipelineHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGPipelineHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
int32 AFGPipelineHologram::GetBaseCostMultiplier() const{ return int32(); }
AActor* AFGPipelineHologram::GetUpgradedActor() const{ return nullptr; }
void AFGPipelineHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
void AFGPipelineHologram::GetSupportedScrollModes(TArray< EHologramScrollMode >* out_modes) const{ }
void AFGPipelineHologram::GetSupportedBuildModes_Implementation(TArray<TSubclassOf<UFGHologramBuildModeDescriptor>>& out_buildmodes) const{ }
bool AFGPipelineHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGPipelineHologram::AdjustForGround(FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
bool AFGPipelineHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPipelineHologram::OnInvalidHitResult(){ }
void AFGPipelineHologram::Scroll(int32 delta){ }
void AFGPipelineHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
void AFGPipelineHologram::SetSnapToGuideLines(bool isEnabled){ }
float AFGPipelineHologram::GetHologramHoverHeight() const{ return float(); }
void AFGPipelineHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGPipelineHologram::ClientPreConstructMessageSerialization(){ }
void AFGPipelineHologram::ServerPostConstructMessageDeserialization(){ }
void AFGPipelineHologram::ResetBuildSteps(){ }
bool AFGPipelineHologram::IsConnectionSnapped(bool lastConnection){ return bool(); }
void AFGPipelineHologram::GetLastSplineData(FSplinePointData &data){ }
void AFGPipelineHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGPipelineHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGPipelineHologram::CheckValidFloor(){ }
void AFGPipelineHologram::CheckValidPlacement(){ }
void AFGPipelineHologram::CheckClearance(const FVector& locationOffset){ }
void AFGPipelineHologram::SetupPipeClearanceDetector(){ }
void AFGPipelineHologram::RouteSelectedSplineMode(FVector startLocation, FVector startNormal, FVector endLocation, FVector endNormal){ }
void AFGPipelineHologram::UpdateSplineComponent(){ }
float AFGPipelineHologram::GetSplineLength(){ return float(); }
void AFGPipelineHologram::UpdateConnectionComponentsFromSplineData(){ }
void AFGPipelineHologram::UpdateSplineCompFromSplineData(){ }
void AFGPipelineHologram::AutoRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::Auto2DRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::AutoRouteNoodleSpline(const FVector& startConnectionPos, const FVector& startConnectionNormal, const FVector& endConnectionPos, const FVector& endConnectionNormal){ }
void AFGPipelineHologram::HorizontalAndVerticalRouteSpline(bool horizontalFirst,
		const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::HorizontalAndVerticalRouteSplineNew(bool horizontalFirst,
		const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::PathFindingRouteSpline(TArray<  FHologramAStarNode >& pathNodes,
		const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
bool AFGPipelineHologram::ValidateMinLength(){ return bool(); }
float AFGPipelineHologram::ValidateCurvatureAndReturnFaultyPosition(){ return float(); }
bool AFGPipelineHologram::ValidateFluidRequirements(){ return bool(); }
