#include "club.h"

Club::Club() : Weapon("Club", 10) {}

int Club::getDamage() {
    return damage + 10;
}
