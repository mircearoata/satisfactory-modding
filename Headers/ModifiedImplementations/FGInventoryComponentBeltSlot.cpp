// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInventoryComponentBeltSlot.h"

UFGInventoryComponentBeltSlot::UFGInventoryComponentBeltSlot() : Super() {
	this->mDefaultInventorySize = 1;
	this->mCanBeRearrange = true;
	this->bReplicates = true;
}
bool UFGInventoryComponentBeltSlot::ContainsStackItemTypeAndHasEnoughRoom(FInventoryStack itemStack){ return bool(); }
void UFGInventoryComponentBeltSlot::OnItemsAdded(int32 idx, int32 num){ }
void UFGInventoryComponentBeltSlot::OnItemsRemoved(int32 index, int32 num, FInventoryItem item){ }
bool UFGInventoryComponentBeltSlot::FilterEquipmentClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
