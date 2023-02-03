#pragma once
#include "weapon.h";
#include <string>
#include <iostream>

using namespace std;

class Animal {
protected:
    // Animal constructor
    string name;

public:
    int health;
    Animal(string name);
    /*
    * Abstraction: attack() method is a pure virtual function meaning the
    * class cannot be instanstiated and any derived classes must implement
    * the attack() method making it an example of abstraction
    */

    /*
    * Polymorphic behaviour: attack() being a virtual function can be 
    * overriden by derived classes
    */
    virtual void attack(Animal *other) = 0;

    /*
    * Overloading: the second method of attack is below, this one takes
    * Weapon* instead, using a different parameter to attack with a weapon
    */
    virtual void attack(Weapon* weapon) {}

    // Returns health
    int getHealth();
    // Returns name
    string getName();
};