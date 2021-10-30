// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRamp.h"
#include "Components/SceneComponent.h"
#include "FGColoredInstanceMeshProxy.h"
#include "Hologram/FGFoundationHologram.h"

AFGBuildableRamp::AFGBuildableRamp(){ 
	this->mIsDoubleRamp = false;
	this->mMeshComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("BuildingMeshProxy"));
	this->mHologramClass = AFGFoundationHologram::StaticClass();
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mMeshComponentProxy->SetupAttachment(RootComponent);
}
void AFGBuildableRamp::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
float AFGBuildableRamp::CalculateRampAngle() const{ return float(); }
