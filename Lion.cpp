#include "lion.h"

using namespace std;

Lion::Lion(string name, int strength) : Animal(name), strength(strength) {}

void Lion::attack(Animal* other) {
    other->health -= strength;
}

void Lion::attack(Weapon* weapon) {
    health -= weapon->getDamage();
}