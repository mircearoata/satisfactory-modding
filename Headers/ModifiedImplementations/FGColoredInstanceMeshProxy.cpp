// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGColoredInstanceMeshProxy.h"

UFGColoredInstanceMeshProxy::UFGColoredInstanceMeshProxy(){ }
void UFGColoredInstanceMeshProxy::BeginPlay(){ }
void UFGColoredInstanceMeshProxy::OnRegister(){ Super::OnRegister(); }
void UFGColoredInstanceMeshProxy::OnUnregister(){ Super::OnUnregister(); }
void UFGColoredInstanceMeshProxy::SetCustomizationData(const FFactoryCustomizationData& customizationData){ }
void UFGColoredInstanceMeshProxy::SetHasPowerData(float newHasPower){ }
void UFGColoredInstanceMeshProxy::SetUserDefinedData(TArray<float> userData){ }
void UFGColoredInstanceMeshProxy::SetInstanced(bool setToInstanced){ }
void UFGColoredInstanceMeshProxy::OnHiddenInGameChanged(){ }
bool UFGColoredInstanceMeshProxy::ShouldCreateRenderState() const {
#if WITH_EDITOR // Ensure visibility in blueprint & editor.
    if( GetWorld()->WorldType == EWorldType::Editor || GetWorld()->WorldType == EWorldType::EditorPreview)
    {
        return true;
    }
#endif    
    // only create when its blocking instancing.
    return mBlockInstancing;
}
void UFGColoredInstanceMeshProxy::InstantiateInternal(){ }
