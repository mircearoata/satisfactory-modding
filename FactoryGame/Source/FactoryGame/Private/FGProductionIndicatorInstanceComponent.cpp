// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGProductionIndicatorInstanceComponent.h"

UFGProductionIndicatorInstanceComponent::UFGProductionIndicatorInstanceComponent(){ 
	this->bAffectDistanceFieldLighting = false;
	this->PrimaryComponentTick.TickGroup = ETickingGroup::TG_DuringPhysics;
	this->PrimaryComponentTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryComponentTick.bTickEvenWhenPaused = false;
	this->PrimaryComponentTick.bCanEverTick = false;
	this->PrimaryComponentTick.bStartWithTickEnabled = false;
	this->PrimaryComponentTick.bAllowTickOnDedicatedServer = false;
	this->PrimaryComponentTick.TickInterval = 0.0;
}
void UFGProductionIndicatorInstanceComponent::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void UFGProductionIndicatorInstanceComponent::SetInstanceManager(UFGProductionIndicatorInstanceManager* manager){ }
void UFGProductionIndicatorInstanceComponent::SetInstanced(bool isInstanced){ }
void UFGProductionIndicatorInstanceComponent::OnProductionStatusChanged(EProductionStatus newStatus){ }
void UFGProductionIndicatorInstanceComponent::ResetIndicatorStatus(){ }
void UFGProductionIndicatorInstanceComponent::OnHiddenInGameChanged(){ }
