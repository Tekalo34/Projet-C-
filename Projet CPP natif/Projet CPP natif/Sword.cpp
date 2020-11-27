#include "Sword.h"

// Constructor
Sword::Sword(int Damage, int Def, int Range)
{
	degats = Damage;
	defense = Def;
	portee = Range;
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

int Sword::getRange()
{
	return portee;
}

/*string Sword::getWeaponName()
{
	return "Epee";
}*/

// Methode pour afficher les stats des armes
void Sword::showStats()
{
	cout << "Degat : " << getDamage() << ", Defense : " << getDef() << ", Portee : " << getRange() ;
}