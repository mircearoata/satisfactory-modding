// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableAutomatedWorkBench.h"
#include "Hologram/FGFactoryHologram.h"
#include "FGPowerInfoComponent.h"
#include "Components/SceneComponent.h"

AFGBuildableAutomatedWorkBench::AFGBuildableAutomatedWorkBench(){ 
	this->mInputInventorySize = 4;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGBuildableAutomatedWorkBench::SetUpInventoryFilters(){ }
bool AFGBuildableAutomatedWorkBench::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableAutomatedWorkBench::Factory_ConsumeIngredients(){ }
void AFGBuildableAutomatedWorkBench::SetManufacturingSpeed(float newManufacturingSpeed){ }
void AFGBuildableAutomatedWorkBench::CreateInventories(){ }
