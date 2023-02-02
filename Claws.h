#pragma once
#include "weapon.h"

class Claws : public Weapon {
public:
    Claws();
    int getDamage() override;
};