#include "Magic_Wand.h"

// Constructor
Magic_Wand::Magic_Wand(int Damage, int Def, int Range)
{
	degats = Damage;
	defense = Def;
	portee = Range;
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

int Magic_Wand::getRange()
{
	return portee;
}

/*string Magic_Wand::getWeaponName()
{
	return "Baton Magique";
}*/

void Magic_Wand::showStats()
{
	cout << "Degat : " << getDamage() << ", Defense : " << getDef() << ", Portee : " << getRange();
}