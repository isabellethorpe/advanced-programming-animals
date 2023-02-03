#include <iostream>
#include "Animal.h"
#include "Battle.h"
#include "Bear.h"
#include "Lion.h"
#include "Claws.h"
#include "Club.h"
#include "Weapon.h"
#include <iostream>

using namespace std;

// Returns the outputs of the battle
string outputFunc(Animal* animal) {
	return animal->getName() + " wins with " + to_string(animal->getHealth()) + " health remaining!";
}

void gameOutput() {
	cout << "let the games begin!" << endl;
}

int main()
{
	gameOutput();

	// Creating instances of Lion and Bear
	Lion lion1("Simba", 30);
	Bear bear1("Yogi", 50);

	// Creating instances of Claws and Club
	Claws claws1;
	Club club1;

	// Attack
	bear1.attack(&claws1);
	lion1.attack(&club1);

	// Show healtj of animals
	cout << bear1.getName() << " health: " << bear1.getHealth() << endl;
	cout << lion1.getName() << " health: " << lion1.getHealth() << endl;

	// Battle object created to perform a fight
	Battle battle1(&lion1, &bear1, &claws1, &club1, outputFunc);
	battle1.fight();

	// Accouncing winner
	announceWinner(battle1);

	return 0;
}

