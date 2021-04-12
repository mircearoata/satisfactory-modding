// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableJumppad.h"

AFGBuildableJumppad::AFGBuildableJumppad() : Super() {
	this->mChargeRateMultiplier = 1;
	this->mLaunchAngle = -1;
	this->mPlayerChainJumpResetTime = 8;
	this->mLauncherMeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("LauncherMeshComponent")); this->mLauncherMeshComponent->SetupAttachment(this->RootComponent);
	this->mLauncherBox = CreateDefaultSubobject<UBoxComponent>(TEXT("LauncherBox")); this->mLauncherBox->SetupAttachment(this->mLauncherMeshComponent);
	this->mTrajectoryMeshScale.X = 1; this->mTrajectoryMeshScale.Y = 1; this->mTrajectoryMeshScale.Z = 1;
	this->mDestinationMeshHeightOffset = 400;
	this->mNumArrows = 5;
	this->mTrajectoryGravityMultiplier = 1;
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mFluidStackSizeMultiplier = 1;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->SetReplicates(true);
	this->NetDormancy = DORM_Awake;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableJumppad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
FVector AFGBuildableJumppad::GetLaunchDirection(){ return FVector(); }
void AFGBuildableJumppad::SetLaunchAngle(float Angle){ }
void AFGBuildableJumppad::SetTrajectoryVisibility(bool Visible){ }
FVector AFGBuildableJumppad::CalculateLaunchVelocity(const FVector& StartLocation, float Gravity) const{ return FVector(); }
const FTrajectoryData& AFGBuildableJumppad::ResimulateTrajectory(){ return *(new FTrajectoryData); }
FTrajectoryData AFGBuildableJumppad::SimulateTrajectory(UWorld* pWorld, const FVector& StartLocation, const FVector& LaunchVector, float GravityMultiplier, AFGBuildableJumppad* pJumpPad){ return FTrajectoryData(); }
void AFGBuildableJumppad::Launch(){ }
void AFGBuildableJumppad::BeginPlay(){ }
void AFGBuildableJumppad::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
float AFGBuildableJumppad::GetProductionProgress() const{ return float(); }
bool AFGBuildableJumppad::CanProduce_Implementation() const{ return bool(); }
EProductionStatus AFGBuildableJumppad::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
void AFGBuildableJumppad::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableJumppad::Factory_TickProducing(float dt){ }
void AFGBuildableJumppad::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){ }
void AFGBuildableJumppad::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){ }
void AFGBuildableJumppad::OnRep_LaunchAngle(){ }
void AFGBuildableJumppad::GenerateSplineMesh(){ }
void AFGBuildableJumppad::DestroySplineMesh(){ }
void AFGBuildableJumppad::DestroyVisualizer(){ }
void AFGBuildableJumppad::UpdateDestinationLocation(){ }
void AFGBuildableJumppad::ConstructSplineFromTrajectoryData(){ }
