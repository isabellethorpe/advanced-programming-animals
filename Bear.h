#pragma once
#include "animal.h"
#include "Weapon.h"

using namespace std;

/*
Inheritance: Bear class is derived from the Animal class,
meaning it inherits all of the non-private members of the Animal class
*/
class Bear : public Animal {
private:
	// How long a bear can fight
	int endurance;

public:
	// Initalising name and endurance
	Bear(string name, int endurance);
	// Overriden method, attacking another animal
	void attack(Animal* other) override;
	// Attacking with a weapon
	void attack(Weapon* weapon);
};
