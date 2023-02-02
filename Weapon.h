#pragma once
#include <string>

using namespace std;

class Weapon {
protected:
	string name;
	int damage;

public:
	/*
	* Constructor: to initialise the weapons member variables
	* and are called when an object of Weapon class is created
	*/
	Weapon(string name, int damage);
	virtual int getDamage();
	string getName();
};