// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceNodeFrackingCore.h"

AFGResourceNodeFrackingCore::AFGResourceNodeFrackingCore() : Super() {
	this->mAllowDecal = true;
	this->mDoSpawnParticle = true;
	this->SetReplicates(true);
	this->NetDormancy = DORM_Initial;
}
void AFGResourceNodeFrackingCore::BeginPlay(){ }
void AFGResourceNodeFrackingCore::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGResourceNodeFrackingCore::RegisterSatellite(TWeakObjectPtr<  AFGResourceNodeFrackingSatellite > satellite){ }
void AFGResourceNodeFrackingCore::Factory_SetSatellitesActive(bool isActive){ }
