// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipeBase.h"

AFGBuildablePipeBase::AFGBuildablePipeBase(){ }
void AFGBuildablePipeBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipeBase::BeginPlay(){ }
void AFGBuildablePipeBase::EndPlay(const EEndPlayReason::Type endPlayReason){ }
int32 AFGBuildablePipeBase::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildablePipeBase::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildablePipeBase::Dismantle_Implementation(){ }
void AFGBuildablePipeBase::GainedSignificance_Implementation(){ }
void AFGBuildablePipeBase::LostSignificance_Implementation(){ }
void AFGBuildablePipeBase::GainedSignificance_Native(){ }
void AFGBuildablePipeBase::LostSignificance_Native(){ }
void AFGBuildablePipeBase::SetupForSignificance(){ }
float AFGBuildablePipeBase::FindOffsetClosestToLocation(const FVector& location) const{ return float(); }
void AFGBuildablePipeBase::GetLocationAndDirectionAtOffset(float offset, FVector& out_location, FVector& out_direction) const{ }
TSubclassOf< class UFGPipeConnectionComponentBase > AFGBuildablePipeBase::GetConnectionType_Implementation(){ return TSubclassOf<class UFGPipeConnectionComponentBase>(); }
const float AFGBuildablePipeBase::PIPE_COST_LENGTH_MULTIPLIER = float();
