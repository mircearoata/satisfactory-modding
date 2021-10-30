// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRoad.h"
#include "FGSplineComponent.h"
#include "FGRoadConnectionComponent.h"
#include "Components/SceneComponent.h"
#include "Hologram/FGRoadHologram.h"

void AFGBuildableRoad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
AFGBuildableRoad::AFGBuildableRoad(){ 
	this->mConnection0 = CreateDefaultSubobject<UFGRoadConnectionComponent>(TEXT("Connection0"));
	this->mConnection1 = CreateDefaultSubobject<UFGRoadConnectionComponent>(TEXT("Connection1"));
	this->mSplineComponent = CreateDefaultSubobject<UFGSplineComponent>(TEXT("SplineComponent"));
	this->mHologramClass = AFGRoadHologram::StaticClass();
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mConnection0->SetupAttachment(RootComponent);
	this->mConnection1->SetupAttachment(RootComponent);
	this->mSplineComponent->SetupAttachment(RootComponent);
}
void AFGBuildableRoad::BeginPlay(){ }
