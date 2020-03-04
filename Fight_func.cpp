#include <iostream>
#include <string>
#include "Monsters.h"
#include "Fight_func.h"

// Fill in the structure fields
Warior get_warior_characteristic()
{
	Warior wariorObject;
	std::string wariorRace;

	std::cout << "  Enter your name:\t";
	std::cin >> wariorObject.wariorName;
	
	std::cout << "  Choose race of hero: ";
	std::cout << "HUMAN, OGRE, GOBLIN, SKELETON, ORC, TROLL. ";
	std::cin >> wariorRace;
	wariorObject.wariorType = get_warior_race(wariorObject, wariorRace);
	
	std::cout << "  Enter your helth:\t";
	std::cin >> wariorObject.wariorHelth;

	std::cout << "  Enter your strength:\t";
	std::cin >> wariorObject.wariorStrength;

	std::cout << "  Enter your agility:\t";
	std::cin >> wariorObject.mwariorAgility;

	std::cout << "  Enter your intellect:\t";
	std::cin >> wariorObject.wariorIntellect;

	std::cout << "  Enter your mana:\t";
	std::cin >> wariorObject.wariorMana;

	std::cout << "  Enter your speed:\t";
	std::cin >> wariorObject.wariorSpeed;
	return wariorObject;
}

// Return the race value from the list
Wariors get_warior_race(Warior wariorObject, std::string wariorRace)
{
	if (wariorRace == "HUMAN" || wariorRace == "human" || wariorRace == "Human")
		return Wariors::HUMAN;
	else if (wariorRace == "OGRE" || wariorRace == "ogre" || wariorRace == "Ogre")
		return Wariors::OGRE;
	else if (wariorRace == "GOBLIN" || wariorRace == "goblin" || wariorRace == "Goblin")
		return Wariors::GOBLIN;
	else if (wariorRace == "SKELETON" || wariorRace == "skeleton" || wariorRace == "Skeleton")
		return Wariors::SKELETON;
	else if (wariorRace == "ORC" || wariorRace == "orc" || wariorRace == "Orc")
		return  Wariors::ORC;
	else if (wariorRace == "TROLL" || wariorRace == "troll" || wariorRace == "Troll")
		return  Wariors::TROLL;
}

//Displaying the structure field
void ptint_warior_characteristic(Warior wariorObject)
{
	std::cout << "  Warior name and race:\t" << wariorObject.wariorName << " ";
	std::cout << (get_monster_type_string(wariorObject)) << std::endl;
	std::cout << "  Warior helth:\t\t" << wariorObject.wariorHelth << std::endl;
	std::cout << "  Warior strength:\t" << wariorObject.wariorStrength << std::endl;
	std::cout << "  Warior agility:\t" << wariorObject.mwariorAgility << std::endl;
	std::cout << "  Warior intellect:\t" << wariorObject.wariorIntellect << std::endl;
	std::cout << "  Warior mana:\t\t" << wariorObject.wariorMana << std::endl;
	std::cout << "  Warior speed:\t\t" << wariorObject.wariorSpeed << std::endl << std::endl;
}

// Return type of monster as string
std::string get_monster_type_string(Warior wariorObject)
{
	if (wariorObject.wariorType == Wariors::HUMAN)
		return "Human";
	if (wariorObject.wariorType == Wariors::OGRE)
		return "Ogre";
	if (wariorObject.wariorType == Wariors::GOBLIN)
		return "Goblin";
	if (wariorObject.wariorType == Wariors::SKELETON)
		return "Skeleton";
	if (wariorObject.wariorType == Wariors::ORC)
		return "Orc";
	if (wariorObject.wariorType == Wariors::TROLL)
		return "Troll";

	return "Unknown";
}