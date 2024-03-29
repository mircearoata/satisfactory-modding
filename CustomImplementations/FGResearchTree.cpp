#include "UObject/ObjectSaveContext.h"
#include "FGSchematic.h"

FPrimaryAssetId UFGResearchTree::GetPrimaryAssetId() const {
	return FPrimaryAssetId(StaticClass()->GetFName(), FPackageName::GetShortFName(GetOutermost()->GetFName()));
}
FText UFGResearchTree::GetPreUnlockDisplayName(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mPreUnlockDisplayName;
}
FText UFGResearchTree::GetDisplayName(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mDisplayName;
}
FText UFGResearchTree::GetPreUnlockDescription(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mPreUnlockDescription;
}
FText UFGResearchTree::GetPostUnlockDescription(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mPostUnlockDescription;
}
FSlateBrush UFGResearchTree::GetResearchTreeIcon(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mResearchTreeIcon;
}
void UFGResearchTree::SetNodes(TSubclassOf<UFGResearchTree> inClass, TArray<UFGResearchTreeNode*> nodes) {
	inClass.GetDefaultObject()->mNodes = nodes;
}
TArray<class UFGResearchTreeNode*> UFGResearchTree::GetNodes(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mNodes;
}
TArray<class UFGAvailabilityDependency*> UFGResearchTree::GetUnlockDependencies(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mUnlockDependencies;
}

#if WITH_EDITOR
EDataValidationResult UFGResearchTree::IsDataValid(TArray<FText>& ValidationErrors) {
	// MODDING IMPLEMENTATION
	EDataValidationResult ValidationResult = Super::IsDataValid(ValidationErrors);

	// UFGResearchTreeNode::GetNodeSchematic is not implemented due to placeholder assets
	// so we read its property directly
	
	static FStructProperty* NodeDataStructProperty = NULL;
	static FClassProperty* SchematicStructProperty = NULL;
	static UClass* ResearchTreeNodeClass = NULL;

	// Lazily initialize research tree node reflection properties for faster access
	if (ResearchTreeNodeClass == NULL) {
		ResearchTreeNodeClass = LoadClass<UFGResearchTreeNode>(NULL, TEXT("/Game/FactoryGame/Schematics/Research/BPD_ResearchTreeNode.BPD_ResearchTreeNode_C"));
		check(ResearchTreeNodeClass);
		//Make sure class is not garbage collected
		ResearchTreeNodeClass->AddToRoot();

		NodeDataStructProperty = CastFieldChecked<FStructProperty>(ResearchTreeNodeClass->FindPropertyByName(TEXT("mNodeDataStruct")));

		// Generated structs names contain GUIDs, so we can't use FindPropertyByName
		for(FField* StructProp = NodeDataStructProperty->Struct->ChildProperties; StructProp; StructProp = StructProp->Next) {
			if (FClassProperty* ClassProp = CastField<FClassProperty>(StructProp)) {
				if (ClassProp->MetaClass->IsChildOf(UFGSchematic::StaticClass())) {
					SchematicStructProperty = ClassProp;
					break;
				}
			}
		}
	}

	const TArray<UFGResearchTreeNode*> Nodes = UFGResearchTree::GetNodes(GetClass());
	for (UFGResearchTreeNode* Node : Nodes) {
		if (!Node->IsA(ResearchTreeNodeClass)) {
			continue;
		}
		const void* NodeDataStructPtr = NodeDataStructProperty->ContainerPtrToValuePtr<void>(Node);
		const UClass* SchematicClass = Cast<UClass>(SchematicStructProperty->GetPropertyValue_InContainer(NodeDataStructPtr));
	
		if (SchematicClass == nullptr) {
			ValidationErrors.Add(NSLOCTEXT("ResearchTree", "Validation_NullSchematic", "Null Schematic found. Was the content it previously referenced deleted or moved?"));
			ValidationResult = EDataValidationResult::Invalid;
		}			
	}
	
	return ValidationResult;
}
#endif