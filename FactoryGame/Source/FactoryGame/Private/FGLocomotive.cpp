// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLocomotive.h"

void AFGLocomotive::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGLocomotive::PreReplication(IRepChangedPropertyTracker & ChangedPropertyTracker){ }
AFGLocomotive::AFGLocomotive(){ }
void AFGLocomotive::BeginPlay(){ }
void AFGLocomotive::Tick(float dt){ }
bool AFGLocomotive::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
bool AFGLocomotive::DriverLeave(bool keepDriving){ return bool(); }
void AFGLocomotive::UpdatePower(){ }
EMultipleUnitControl AFGLocomotive::GetMultipleUnitRole() const{ return EMultipleUnitControl(); }
bool AFGLocomotive::CanSetTrainMultipleUnitMaster() const{ return bool(); }
bool AFGLocomotive::SetMultipleUnitControlMaster(bool force){ return bool(); }
void AFGLocomotive::ClearMultipleUnitControlMaster(){ }
void AFGLocomotive::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGLocomotive::SetPowerConsumption(float pct){ }
void AFGLocomotive::SetPowerRegeneration(float pct){ }
FName AFGLocomotive::VehicleMovementComponentName = FName();
