#include "Shield.h"

// Constructor
Shield::Shield(int Damage, int Def, int Range)
{
	degats = Damage;
	defense = Def;
	portee = Range;
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

int Shield::getRange()
{
	return portee;
}

/*string Shield::getWeaponName()
{
	return "Bouclier";
}*/

void Shield::showStats()
{
	cout << "Degat : " << getDamage() << ", Defense : " << getDef() << ", Portee : " << getRange();
}