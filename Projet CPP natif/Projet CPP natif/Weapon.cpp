#include "Weapon.h"

// Conctructor
Weapon::Weapon()
{
}

// Getter de "nomArme"
string Weapon::getWeaponName()
{
	return nomArme;
}

// Getter de "WeaponType"
string Weapon::getWeaponType()
{
	return typeArme;
}

// Setter de "nomArme"
void Weapon::setWeaponName()
{
	cout << "Donnez un nom a votre arme : ";
	cin >> nomArme;
}

// Methode pour afficher les stats des armes
void Weapon::showStats()
{
}