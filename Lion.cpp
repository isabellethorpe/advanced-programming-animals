#include "lion.h"

using namespace std;

// Lion class constructor, passed name and strenght to Animal base class
Lion::Lion(string name, int strength) : Animal(name), strength(strength) {}

// Attack other animal, decreases other animals health by lions strength
void Lion::attack(Animal* other) {
    other->health -= strength;
}

// Attack with weapon
// Decreases lions health by damage value of the weapon itself
void Lion::attack(Weapon* weapon) {
    health -= weapon->getDamage();
}

