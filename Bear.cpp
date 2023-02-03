#include "bear.h"

using namespace std;

// Bear class constructor, passes name and indurance to Animal base class
Bear::Bear(string name, int endurance) : Animal(name), endurance(endurance) {}

// Attack other animal, decreases other animals health by half of the bears indurance
void Bear::attack(Animal* other) {
    other->health -= endurance / 2;
}

// Attack with weapon
// Decreases bears health by damage value of the weapon itself
void Bear::attack(Weapon* weapon) {
    health -= weapon->getDamage();
}

