#include <iostream>
#include <string>
#include <ctime>

#include "Monsters.h"
#include "Fight_func.h"

int main()
{
	srand(time(NULL));
	// Enter fields for Hero & Monster
	std::cout << "HERO:\n";
	Warior hero = get_warior_characteristic();
	std::cout << "Monster:\n";
	Warior monster = get_warior_characteristic();

	std::cout << std::endl;
	// Print fields Hero & Monster
	std::cout << "Print HERO:\n";
	ptint_warior_characteristic(hero);

	std::cout << "Print Monster:\n";
	ptint_warior_characteristic(monster);

	return 0;
}
