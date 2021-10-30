// This file has been automatically generated by the Unreal Header Implementation tool

#include "Resources/FGResourceNode.h"

#if WITH_EDITOR
void AFGResourceNode::PostEditChangeProperty( FPropertyChangedEvent& propertyChangedEvent){ Super::PostEditChangeProperty(propertyChangedEvent); }
#endif 
AFGResourceNode::AFGResourceNode(){ 
	this->mPurity = EResourcePurity::RP_Normal;
	this->mAmount = EResourceAmount::RA_Infinite;
	this->mResourcesLeft = 0;
	this->mCanPlaceResourceExtractor = true;
	this->mExtractMultiplier = 1;
}
void AFGResourceNode::BeginPlay(){ }
void AFGResourceNode::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGResourceNode::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGResourceNode::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGResourceNode::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGResourceNode::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGResourceNode::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGResourceNode::HasAnyResources() const{ return bool(); }
int32 AFGResourceNode::ExtractResource(int32 amount){ return int32(); }
float AFGResourceNode::GetExtractionSpeedMultiplier() const{ return float(); }
bool AFGResourceNode::CanPlaceResourceExtractor() const{ return bool(); }
void AFGResourceNode::InitResource(TSubclassOf<UFGResourceDescriptor> resourceClass, EResourceAmount amount, EResourcePurity purity){ }
FText AFGResourceNode::GetResoucesLeftText() const{ return FText(); }
FText AFGResourceNode::GetResoucePurityText() const{ return FText(); }
const FInt32Interval& AFGResourceNode::GetResourceAmount(EResourceAmount amount) const{ return *(new FInt32Interval); }
int32 AFGResourceNode::GetRandomResourceAmount(EResourceAmount amount) const{ return int32(); }
void AFGResourceNode::ExtractResourceAndGiveToPlayer(AFGCharacterPlayer* toPlayer, int32 amount){ }
int32 AFGResourceNode::GetNumResourcesPerExtract() const{ return int32(); }
void AFGResourceNode::InitRadioactivity(){ }
void AFGResourceNode::UpdateRadioactivity(){ }
void AFGResourceNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const { Super::GetLifetimeReplicatedProps(OutLifetimeProps); }
