#include "Shield.h"

// Constructor
Shield::Shield(int Damage, int Def)
{
	degats = Damage;
	defense = Def;
}

// Getter de "degats"
int Shield::getDamage()
{
	return degats;
}

// Getter de "defense"
int Shield::getDef()
{
	return defense;
}
