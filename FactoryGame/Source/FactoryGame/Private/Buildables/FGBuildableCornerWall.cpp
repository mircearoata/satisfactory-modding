// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableCornerWall.h"
#include "Components/SceneComponent.h"
#include "FGColoredInstanceMeshProxy.h"

AFGBuildableCornerWall::AFGBuildableCornerWall(){ 
	this->mSize = 0.0;
	this->mHeight = 0.0;
	this->mMeshComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("BuildingMeshProxy"));
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mMeshComponentProxy->SetupAttachment(RootComponent);
}
