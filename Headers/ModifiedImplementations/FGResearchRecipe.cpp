// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResearchRecipe.h"

FString FResearchRecipeReward::ToString() const{ return FString(); }
#if WITH_EDITOR
void UFGResearchRecipe::PreSave(const  ITargetPlatform* targetPlatform){ }
void UFGResearchRecipe::UpdateAssetBundleData(){ }
#endif 
UFGResearchRecipe::UFGResearchRecipe(){ }
FResearchRecipeReward UFGResearchRecipe::GetResearcResults(TSubclassOf<UFGResearchRecipe> inClass){ return FResearchRecipeReward(); }
float UFGResearchRecipe::GetResearchTime(TSubclassOf<UFGResearchRecipe> inClass){ return float(); }
TArray<TSubclassOf<class UFGItemDescriptor>> UFGResearchRecipe::GetResearchTriggerItems(TSubclassOf<UFGResearchRecipe> inClass){ return TArray<TSubclassOf<class UFGItemDescriptor>>(); }
bool UFGResearchRecipe::IsResearchRepeatable(TSubclassOf<UFGResearchRecipe> inClass){ return bool(); }
bool UFGResearchRecipe::IsExcludedFromBuild(TSubclassOf<UFGResearchRecipe> inClass){ return bool(); }
const TArray<TSubclassOf<class UFGResearchRecipe>> UFGResearchRecipe::GetRewardedResearchRecipes() const{ return TArray<TSubclassOf<class UFGResearchRecipe>>(); }
const TArray<TSubclassOf<class UFGSchematic>> UFGResearchRecipe::GetRewardedSchematics() const{ return TArray<TSubclassOf<class UFGSchematic>>(); }
FText UFGResearchRecipe::GetDisplayName() const{ return FText(); }
void UFGResearchRecipe::Serialize(FArchive& ar){ Super::Serialize(ar); }
void UFGResearchRecipe::PostLoad(){ Super::PostLoad(); }
FPrimaryAssetId UFGResearchRecipe::GetPrimaryAssetId() const {
  return FPrimaryAssetId(StaticClass()->GetFName(), GetFName());
}
