// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGNoneDescriptor.h"

UFGNoneDescriptor::UFGNoneDescriptor() : Super() {
	this->mUseDisplayNameAndDescription = true;
	this->mDisplayName = NSLOCTEXT("NoneDescriptor", "DisplayName", "None");
	this->mDescription = NSLOCTEXT("NoneDescriptor", "Description", "Nothing");
	this->mStackSize = EStackSize::SS_MEDIUM;
	this->mCanBeDiscarded = true;
	this->mForm = EResourceForm::RF_SOLID;
}
