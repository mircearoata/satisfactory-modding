// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FGAvailabilityDependency.h"
#include "ItemAmount.h"
#include "FGConsumablesConsumedDependency.generated.h"

/**
 * 
 */
UCLASS( Blueprintable, abstract )
class FACTORYGAME_API UFGConsumablesConsumedDependency : public UFGAvailabilityDependency
{
	GENERATED_BODY()

public:
	bool AreDependenciesMet( UObject* worldContext ) const override;

    TMap< TSubclassOf< class UFGConsumableDescriptor >, int32 > GetItemAmount() const { return mConsumablesConsumedCount; }

protected:
	/** The amount of the given consumables that should have been consumed up for this dependency to be met */
	UPROPERTY( EditDefaultsOnly )
	TMap< TSubclassOf< class UFGConsumableDescriptor >, int32 > mConsumablesConsumedCount;
	
};
