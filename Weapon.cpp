#include "weapon.h"

using namespace std;

Weapon::Weapon(string name, int damage) : name(name), damage(damage) {}

int Weapon::getDamage() {
    return damage;
}

std::string Weapon::getName() {
    return name;
}