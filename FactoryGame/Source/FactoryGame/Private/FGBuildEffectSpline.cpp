// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildEffectSpline.h"

AFGBuildEffectSpline::AFGBuildEffectSpline(){ 
	this->mAttachment = nullptr;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGBuildEffectSpline::BeginPlay(){ }
void AFGBuildEffectSpline::Tick(float DeltaTime){ }
void AFGBuildEffectSpline::SetupAttachment( AFGPipeBuilderTrail* inAttachment){ }
