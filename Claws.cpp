#include "claws.h"

// Claws class is child class of weapon
// Constructor initialisies weapon name and damage
Claws::Claws() : Weapon("Claws", 20) {}

// Overrides virtual function from weapon to return damage from claws
int Claws::getDamage() {
    // Add 5 to the original damage to get the total damage for clasws
    return damage + 5;
}
