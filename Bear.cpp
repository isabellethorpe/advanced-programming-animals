#include "bear.h"

using namespace std;

Bear::Bear(string name, int endurance) : Animal(name), endurance(endurance) {}

void Bear::attack(Animal* other) {
    other->health -= endurance / 2;
}

void Bear::attack(Weapon* weapon) {
    health -= weapon->getDamage();
}

