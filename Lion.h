#pragma once
#include "animal.h"
#include "Weapon.h"

using namespace std;

class Lion : public Animal {
private:
	/*
	Encapsulation: strength variable is declared as private, making it only
	accessible to the Lion class and not to other classes. This is encapsulation
	as it protects the variable from being accessed by external code
	*/
	int strength;

public:
	Lion(string name, int strength);
	void attack(Animal* other) override;
	void attack(Weapon* weapon);
};