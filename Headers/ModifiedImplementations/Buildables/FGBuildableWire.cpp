// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableWire.h"

AFGBuildableWire::AFGBuildableWire(){ }
void AFGBuildableWire::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableWire::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGBuildableWire::BeginPlay(){ }
void AFGBuildableWire::Destroyed(){ }
int32 AFGBuildableWire::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
UFGCircuitConnectionComponent* AFGBuildableWire::GetOppositeConnection(const  UFGCircuitConnectionComponent* connection) const{ return nullptr; }
void AFGBuildableWire::Disconnect(){ }
void AFGBuildableWire::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildableWire::UpdateWireMesh(){ }
bool AFGBuildableWire::Connect( UFGCircuitConnectionComponent* first,  UFGCircuitConnectionComponent* second){ return bool(); }
bool AFGBuildableWire::IsConnected() const{ return bool(); }
void AFGBuildableWire::OnRep_Locations(){ }
FName AFGBuildableWire::mWireMeshTag = FName();
