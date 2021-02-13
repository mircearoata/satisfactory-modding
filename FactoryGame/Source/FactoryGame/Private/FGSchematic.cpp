// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSchematic.h"

#if WITH_EDITOR
void UFGSchematic::PreSave(const  ITargetPlatform* targetPlatform){ }
#endif 
#if WITH_EDITOR
void UFGSchematic::AddRecipe(TSubclassOf< UFGSchematic > inClass, TSubclassOf<  UFGRecipe > recipe){ }
void UFGSchematic::MigrateDataToNewDependencySystem(){ }
#endif 
#if WITH_EDITOR
void UFGSchematic::UpdateAssetBundleData(){ }
#endif 
UFGSchematic::UFGSchematic(){ }
ESchematicType UFGSchematic::GetType(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mType;
	else
		return ESchematicType();
}
FText UFGSchematic::GetSchematicDisplayName(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText();
}
TSubclassOf< class UFGSchematicCategory > UFGSchematic::GetSchematicCategory(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mSchematicCategory;
	else
		return TSubclassOf< class UFGSchematicCategory >();
}
void UFGSchematic::GetSubCategories(TSubclassOf< UFGSchematic > inClass,  TArray< TSubclassOf<  UFGSchematicCategory > >& out_subCategories){ 
	if(inClass)
		out_subCategories = inClass.GetDefaultObject()->mSubCategories;
}
TArray< FItemAmount > UFGSchematic::GetCost(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mCost;
	else
		return TArray< FItemAmount >();
}
TArray< UFGUnlock* > UFGSchematic::GetUnlocks(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mUnlocks;
	else
		return TArray<UFGUnlock*>();
}
int32 UFGSchematic::GetTechTier(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mTechTier;
	else
		return int32();
}
float UFGSchematic::GetTimeToComplete(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mTimeToComplete;
	else
		return float();
}
FSlateBrush UFGSchematic::GetItemIcon(TSubclassOf< UFGSchematic > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mSchematicIcon;
	else
		return FSlateBrush();
}
bool UFGSchematic::AreSchematicDependenciesMet(TSubclassOf< UFGSchematic > inClass, UObject* worldContext){ return bool(); }
void UFGSchematic::GetSchematicDependencies(TSubclassOf< UFGSchematic > inClass, TArray<  UFGAvailabilityDependency* >& out_schematicDependencies){ }
bool UFGSchematic::IsRepeatPurchasesAllowed(TSubclassOf< UFGSchematic > inClass){ return bool(); }
TArray< EEvents > UFGSchematic::GetRelevantEvents(TSubclassOf< UFGSchematic > inClass){ return TArray<EEvents>(); }
bool UFGSchematic::IsIncludedInBuild(TSubclassOf< UFGSchematic > inClass){ return bool(); }
void UFGSchematic::PostLoad(){ Super::PostLoad(); }
void UFGSchematic::Serialize(FArchive& ar){ Super::Serialize(ar); }
FPrimaryAssetId UFGSchematic::GetPrimaryAssetId() const{ return FPrimaryAssetId(); }
