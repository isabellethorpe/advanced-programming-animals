#pragma once
#include <string>

using namespace std;

class Weapon {
protected:
	// Member variable - stores weapon name
	string name;
	// Member variable - stores weapon damage
	int damage;

public:
	/*
	* Constructor: to initialise the weapons member variables
	* and are called when an object of Weapon class is created
	*/
	Weapon(string name, int damage);
	// Virtual function to get weapon damage
	virtual int getDamage();
	// Gets name of weapon
	string getName();
};