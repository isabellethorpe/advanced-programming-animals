#include "battle.h"
#include <iostream>
#include <string>

using namespace std;

// Round variable - static member
int Battle::round = 0;

// Battle class constructor, Animal pointers, Weapon Pointers 
Battle::Battle(Animal* player1, Animal* player2, Weapon* weapon1, Weapon* weapon2, OutputFunc outputFunc) {
	// Initialise player1
	this->player1 = player1;
	// Initialise player2
	this->player2 = player2;
	// Initialise outputFunc 
	this->outputFunc = outputFunc;
}

// Battle between two animals
void Battle::fight() {
	while (player1->getHealth() > 0 && player2->getHealth() > 0) {
		player1->attack(player2);
		player2->attack(player1);
	}
}

// Returns pointer to player1
Animal* Battle::getPlayer1() {
	return player1;
}

// Returns pointer to player2
Animal* Battle::getPlayer2() {
	return player2;
}

// Accouncing the winner of the battle
void announceWinner(Battle& battle) {
	Animal* winner = battle.getPlayer1()->getHealth() <= 0 ? battle.getPlayer2() : battle.getPlayer1();
	// Outputs calling the outputFunc 
	cout << battle.outputFunc(winner) << endl;
}



