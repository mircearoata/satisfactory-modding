// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePriorityPowerSwitch.h"

void AFGBuildablePriorityPowerSwitch::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildablePriorityPowerSwitch::BeginPlay(){ }
void AFGBuildablePriorityPowerSwitch::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildablePriorityPowerSwitch, mPriority);
}
void AFGBuildablePriorityPowerSwitch::AcceptCircuitGroup( UFGPowerCircuitGroup* circuitGroup){ }
void AFGBuildablePriorityPowerSwitch::SetPriority(int priority){ }
void AFGBuildablePriorityPowerSwitch::OnRep_Priority(){ }
