// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGInteractWidget.h"

UFGInteractWidget::UFGInteractWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { 
	this->mUseKeyboard = false;
	this->mUseMouse = false;
	this->mMouseLockMode = EMouseLockMode::DoNotLock;
	this->mHideCursorDuringCapture = true;
	this->mCaptureInput = false;
	this->mRestoreFocusWhenLost = true;
	this->mDesiredHorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	this->mDesiredVerticalAlignment = EVerticalAlignment::VAlign_Fill;
	this->mDesiredAlignmentSize.Value = 1.0;
	this->mDesiredAlignmentSize.SizeRule = ESlateSizeRule::Fill;
	this->mInteractObject = nullptr;
	this->mDefaultFocusWidgetClass = nullptr;
	this->mUseGamepadCursor = false;
	this->mCustomTickRate = 0.0;
	this->mCallCustomTickOnConstruct = true;
	this->mDefaultFocusWidget = nullptr;
	this->mSupportsStacking = false;
	this->mSupportsCaching = false;
}
void UFGInteractWidget::Init_Implementation(){ }
void UFGInteractWidget::SetInputMode_Implementation(){ }
void UFGInteractWidget::UpdateIgnoreMoveInput_Implementation(){ }
void UFGInteractWidget::UpdateIgnoreLookInput_Implementation(){ }
void UFGInteractWidget::OnEscapePressed_Implementation(){ }
void UFGInteractWidget::OnConsume(){ }
void UFGInteractWidget::SetDefaultFocusWidget(UWidget* focusWidget){ }
void UFGInteractWidget::SetupDefaultFocus_Implementation(){ }
void UFGInteractWidget::NativeConstruct(){ }
void UFGInteractWidget::NativeDestruct(){ }
void UFGInteractWidget::NativeOnRemovedFromFocusPath(const FFocusEvent& InFocusEvent){ }
bool UFGInteractWidget::NativeCanCallInit(){ return bool(); }
void UFGInteractWidget::NativeTestAndQueueInit(){ }
