// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableWire.h"

AFGBuildableWire::AFGBuildableWire() : Super() {
	this->mMaxLength = 5000;
	this->mLengthPerCost = 100;
	this->mWireMesh = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("MainMesh")); this->mWireMesh->SetupAttachment(this->RootComponent);
	this->mHologramClass = AFGWireHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = false; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_WireBuild.BP_MaterialEffect_WireBuild_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->SetReplicates(true);
	this->NetDormancy = DORM_DormantAll;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableWire::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableWire::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGBuildableWire::BeginPlay(){ }
void AFGBuildableWire::Destroyed(){ }
int32 AFGBuildableWire::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
UFGCircuitConnectionComponent* AFGBuildableWire::GetOppositeConnection(const  UFGCircuitConnectionComponent* connection) const{ return nullptr; }
void AFGBuildableWire::Disconnect(){ }
void AFGBuildableWire::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildableWire::UpdateWireMesh(){ }
void AFGBuildableWire::Connect( UFGCircuitConnectionComponent* first,  UFGCircuitConnectionComponent* second){ }
bool AFGBuildableWire::IsConnected() const{ return bool(); }
void AFGBuildableWire::OnRep_Locations(){ }
FName AFGBuildableWire::mWireMeshTag = FName();
