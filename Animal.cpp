#include "animal.h"
using namespace std;

Animal::Animal(string name) : name(name), health(100) {}

int Animal::getHealth() {
    return health;
}

string Animal::getName() {
    return name;
}


