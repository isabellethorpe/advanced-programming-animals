#include "weapon.h"

using namespace std;

// Constructor for Weapon taking in name and damage
Weapon::Weapon(string name, int damage) : name(name), damage(damage) {}

// Returns weapon damage
int Weapon::getDamage() {
    return damage;
}

// Returns weapon name 
std::string Weapon::getName() {
    return name;
}