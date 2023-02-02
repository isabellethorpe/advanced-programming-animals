#pragma once
#include "weapon.h"

class Club : public Weapon {
public:
    Club();
    int getDamage() override;
};