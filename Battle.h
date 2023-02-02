#pragma once
#include "animal.h"
#include "weapon.h"

using namespace std;


class Battle {
private:

    /*
    * Static members: round variable is declared as static, meaning it is
    * shared among objects of the class and can be accessed without creating
    * an object of Battle class. 
    */
    static int round; 

    /*
    * Friendship: announceWinner() is a friend of the Battle class meaning
    * it has access to private members of that class, granting access to
    * private members
    */
    friend void announceWinner(Battle& battle); 

    /*
    * Pointers: player1 and player2 are declared as pointers to objects
    * of the Animal class and are used to store the addresses of the objects
    */
    Animal* player1;
    Animal* player2;

    /*
    * Functional pointers: outputFunc variable is a pointer to a function
    * that returns a string and takes an Animals pointer as an argument
    * The variable is used to store the address of the specific function
    * and be used to call that function
    */
    using OutputFunc = string(*)(Animal*);
    OutputFunc outputFunc;

public:

    Battle(Animal* player1, Animal* player2, Weapon* weapon1, Weapon* weapon2, OutputFunc outputFunc);
    void fight();

    Animal* getPlayer1();
    Animal* getPlayer2();
};


