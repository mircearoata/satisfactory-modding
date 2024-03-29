// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGHotbarShortcut.h"
#include "FGRecipeShortcut.generated.h"

/**
 * A specific type of hotbar shortcut that is used for building recipes.
 */
UCLASS()
class FACTORYGAME_API UFGRecipeShortcut : public UFGHotbarShortcut
{
	GENERATED_BODY()
public:
	/** Decide on what properties to replicate */
	virtual void GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps ) const override;

	/** Get the recipe we want to activate when activating this shortcut */
	UFUNCTION( BlueprintPure, Category="Shortcut" )
	TSubclassOf< class UFGRecipe > GetRecipe() const{ return mRecipeToActivate; }

	/** Set the recipe of the current shortcut, the recipe will be saved
	 * @param recipe - null is valid, then we won't have any shortcut show up
	 * @param silent if true, the "Shortcut Bound" notification will be suppressed
	 **/
	UFUNCTION( BlueprintCallable, Category="Shortcut" )
	void SetRecipe( TSubclassOf< class UFGRecipe > recipe, bool silent = false );

	//~ Begin UFGHotbarShortcut interface
	void Execute_Implementation( class AFGPlayerController* owner ) override;
	bool IsValidShortcut_Implementation( class AFGPlayerController* owner ) const override;
	UTexture2D* GetDisplayImage_Implementation() const override;
	bool IsActive_Implementation( class AFGPlayerController* owner ) const override;
	virtual bool IsSame_Implementation(UFGHotbarShortcut* shortcut) const override;
	virtual FString DescribeShortcut_Implementation() const override;
	//~ End UFGHotbarShortcut interface
	
protected:
	UFUNCTION()
	void OnRep_Recipe();

	virtual void OnClientSubsystemsValid() override;
	virtual void DestroyShortcut_Implementation() override;

	UFUNCTION()
	void OnRecipeUnlocked( TSubclassOf<UFGRecipe> recipeClass );
	
protected:
	UPROPERTY( ReplicatedUsing=OnRep_Recipe, SaveGame )
	TSubclassOf< class UFGRecipe > mRecipeToActivate;
};