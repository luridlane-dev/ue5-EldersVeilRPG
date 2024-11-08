// Lurid Lane - All Rights Reserved.


#include "DataAssets/Input/DataAsset_InputConfig.h"

UInputAction* UDataAsset_InputConfig::FindNativeInputActionByTag(const FGameplayTag& inInputTag)
{
	// Loop through each input action configuration in NativeInputActions array
	for (const FWarriorInputActionConfig& InputActionConfig: NativeInputActions) {
		// Check if the input tag matches the one provided and the action is valid
		if (InputActionConfig.InputTag == inInputTag && InputActionConfig.InputAction) {
			// Return the input action associated with this tag
			return InputActionConfig.InputAction;
		}
	}

	// Return nullptr if no matching action is found
	return nullptr;
}
