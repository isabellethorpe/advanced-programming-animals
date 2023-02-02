#include "battle.h"
#include <iostream>
#include <string>

using namespace std;

int Battle::round = 0;

Battle::Battle(Animal* player1, Animal* player2, Weapon* weapon1, Weapon* weapon2, OutputFunc outputFunc) {
	this->player1 = player1;
	this->player2 = player2;
	this->outputFunc = outputFunc;
}

void Battle::fight() {
	while (player1->getHealth() > 0 && player2->getHealth() > 0) {
		player1->attack(player2);
		player2->attack(player1);
	}
}

Animal* Battle::getPlayer1() {
	return player1;
}

Animal* Battle::getPlayer2() {
	return player2;
}

void announceWinner(Battle& battle) {
	Animal* winner = battle.getPlayer1()->getHealth() <= 0 ? battle.getPlayer2() : battle.getPlayer1();
	cout << battle.outputFunc(winner) << endl;
}



