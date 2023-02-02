#include "claws.h"

Claws::Claws() : Weapon("Claws", 20) {}

int Claws::getDamage() {
    return damage + 5;
}
