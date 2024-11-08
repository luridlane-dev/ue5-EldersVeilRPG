// Lurid Lane - All Rights Reserved.


#include "Characters/WarriorBaseCharacter.h"

AWarriorBaseCharacter::AWarriorBaseCharacter()
{
    // Disable ticking for this actor, meaning the Tick() function won't be called every frame.
    PrimaryActorTick.bCanEverTick = false;

    // Ensure ticking is disabled when the actor is first initialized.
    PrimaryActorTick.bStartWithTickEnabled = false;

    // Disable decals (like blood splatter or 3D labels) from being applied to the character's mesh.
    GetMesh()->bReceivesDecals = false;

}

