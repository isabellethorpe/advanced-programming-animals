#include "animal.h"
using namespace std;

// Constructor for name and heatlh (set to 100)
Animal::Animal(string name) : name(name), health(100) {}

// Returns heatlh
int Animal::getHealth() {
    return health;
}

// Returns name
string Animal::getName() {
    return name;
}


