#pragma once
#include "animal.h"
#include "Weapon.h"

using namespace std;

// Lion inherits off Animal class
class Lion : public Animal {
private:
	/*
	Encapsulation: strength variable is declared as private, making it only
	accessible to the Lion class and not to other classes. This is encapsulation
	as it protects the variable from being accessed by external code
	*/
	int strength;

public:
	// Initialising name and strength
	Lion(string name, int strength);
	// Overriden function, for Animal as a pointer funciton
	void attack(Animal* other) override;
	// Attack, taking Weapom pointer as a param
	void attack(Weapon* weapon);
};