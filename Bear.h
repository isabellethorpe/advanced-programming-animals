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
	int endurance;

public:
	Bear(string name, int endurance);
	void attack(Animal* other) override;
	void attack(Weapon* weapon);
};
