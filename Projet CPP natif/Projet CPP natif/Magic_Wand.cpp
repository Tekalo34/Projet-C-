#include "Magic_Wand.h"

// Constructor
Magic_Wand::Magic_Wand(int Damage, int Def)
{
	degats = Damage;
	defense = Def;
}

// Getter de "degats"
int Magic_Wand::getDamage()
{
	return degats;
}

// Getter de "defense"
int Magic_Wand::getDef()
{
	return defense;
}
