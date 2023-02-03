#pragma once
#include "weapon.h"

// Child class of weapon
class Club : public Weapon {
public:
    // Constructor
    Club();
    // Overrides virtual function of weapon to get club damage
    int getDamage() override;
};
