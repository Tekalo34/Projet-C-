#include "Sword.h"

// Constructor
Sword::Sword(int Damage, int Def)
{
	degats = Damage;
	defense = Def;
}

// Getter de "degats"
int Sword::getDamage()
{
	return degats;
}

// Getter de "defense"
int Sword::getDef()
{
	return defense;
}
