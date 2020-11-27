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

// Methode pour afficher les stats des armes
void Shield::showStats()
{
	cout << "Degat : " << getDamage() << ", Defense : " << getDef() << ", Portee : " << getRange();
}