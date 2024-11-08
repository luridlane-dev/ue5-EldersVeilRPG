// Lurid Lane - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataAsset_InputConfig.generated.h"

class UInputAction;
class UInputMappingContext;

// Structure to store input action configuration with a corresponding tag
USTRUCT(BlueprintType)
struct FWarriorInputActionConfig {
	GENERATED_BODY()

public:
	// Tag associated with the input action (e.g., "InputTag.Move")
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	// The actual input action associated with this tag (e.g., movement action)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* InputAction;
};

// Data asset class to configure input mappings and manage input actions
UCLASS()
class ELDERSVEILRPG_API UDataAsset_InputConfig : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// Default mapping context for the input actions
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputMappingContext* DefaultMappingContext;

	// Array of native input actions with their tags (e.g., move, look)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputTag"))
	TArray<FWarriorInputActionConfig> NativeInputActions;

	// Finds an input action by its tag; returns the action if found, nullptr otherwise
	UInputAction* FindNativeInputActionByTag(const FGameplayTag& inInputTag);
};
