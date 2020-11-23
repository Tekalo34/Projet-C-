#include "Weapon.h"

// Conctructor
Weapon::Weapon(string Name, int Strength)
{
	nom = Name;
	force = Strength;
}

// Getter de "nom"
string Weapon::getName()
{
	return nom;
}

//Getter de "force"
int Weapon::getStrength()
{
	return force;
}
