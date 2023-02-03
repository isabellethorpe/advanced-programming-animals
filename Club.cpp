#include "club.h"

// Club class is child class of weapon
// Constructor initialisies weapon name and damage
Club::Club() : Weapon("Club", 10) {}

// Overrides virtual function from weapon to return damage from club
int Club::getDamage() {
 // Add 5 to the original damage to get the total damage for club
    return damage + 10;
}

