// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryColoringTypes.h"

UFGFactoryCustomizationDescriptor::UFGFactoryCustomizationDescriptor(){ }
#if WITH_EDITOR
void UFGFactoryCustomizationDescriptor_Material::Sanitize(TSubclassOf<UFGFactoryCustomizationDescriptor_Material> MaterialToSanitize, FString invalidTypeName, TArray<TSubclassOf<class AFGBuildable>> &mPurgeList){ }
void UFGFactoryCustomizationDescriptor_Material::Purge(TSubclassOf<UFGFactoryCustomizationDescriptor_Material> MaterialToSanitize, TArray<TSubclassOf<class AFGBuildable>> mPurgeList){ }
#endif 
bool UFGFactoryCustomizationDescriptor_Material::BuildableRecipeIsMappedTo(TSubclassOf<  UFGRecipe > recipe){ return bool(); }
bool UFGFactoryCustomizationDescriptor_Material::AddType(TSubclassOf<  AFGBuildable > inBuildable, TSubclassOf<UFGRecipe> inRecipe){ return bool(); }
void UFGFactorySkinActorData::GetSkinComponentDataForSkinActorData(TSubclassOf< UFGFactorySkinActorData > skinClass, TMap< TSubclassOf< UFGFactoryCustomizationDescriptor_Skin >, FFactorySkinComponentGroup >& out_componentGroupData){ }
#if WITH_EDITOR
EDataValidationResult UFGFactoryCustomizationCollection::IsDataValid(TArray< FText >& ValidationErrors){ return EDataValidationResult::Valid; }
#endif 
UFGFactoryCustomizationCollection::UFGFactoryCustomizationCollection(){ }
void FFactoryCustomizationData::Initialize( AFGGameState* gameState){ }
void FFactoryCustomizationData::InlineCombine(const FFactoryCustomizationData& other){ }
void FFactoryCustomizationData::UpdateHasPowerData(){ }
void FFactoryCustomizationData::GetCustomizationArray(TArray< TSubclassOf <  UFGFactoryCustomizationDescriptor > >& out_customizations){ }
