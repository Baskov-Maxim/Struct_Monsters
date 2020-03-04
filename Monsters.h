#ifndef MONSTERS_H
#define MONSTERS_H

// Type of monsters
enum class Wariors
{
	HUMAN,
	OGRE,
	GOBLIN,
	SKELETON,
	ORC,
	TROLL,
};

// Struct of wariors
struct Warior
{
	std::string wariorName;
	Wariors wariorType;			// Race

	int wariorHelth		= 100;
	short wariorStrength	= 10;
	short mwariorAgility	= 10;
	short wariorIntellect	= 1;
	short wariorMana	= 100;	
	short wariorSpeed	= 100;
};

#endif
