#pragma once
#include "weapon.h"

// Child class of weapon
class Claws : public Weapon {
public:
    // Constructor
    Claws();
    // Overides virtual function of weapon to get claw damage
    int getDamage() override;
};