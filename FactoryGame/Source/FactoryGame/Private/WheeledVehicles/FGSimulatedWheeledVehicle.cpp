// This file has been automatically generated by the Unreal Header Implementation tool

#include "WheeledVehicles/FGSimulatedWheeledVehicle.h"
#include "Components/SkeletalMeshComponent.h"

AFGSimulatedWheeledVehicle::AFGSimulatedWheeledVehicle(){ 
	this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
}
void AFGSimulatedWheeledVehicle::Init( AFGWheeledVehicle* vehicle){ }
void AFGSimulatedWheeledVehicle::UpdateCustomizationData( AFGWheeledVehicle* vehicle){ }
void AFGSimulatedWheeledVehicle::ApplyMeshPrimitiveData(const FFactoryCustomizationData& customizationData){ }
void AFGSimulatedWheeledVehicle::ShowGhostingEffect(bool enabled){ }
void AFGSimulatedWheeledVehicle::BeginPlay(){ }
void AFGSimulatedWheeledVehicle::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
