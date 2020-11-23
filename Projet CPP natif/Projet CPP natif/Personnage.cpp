#include "Personnage.h"

// Constructor
Personnage::Personnage(int HP, int Strength, float Crit_Rate)
{
	pv = HP;
	force = Strength;
	taux_crit = Crit_Rate;
}

// Getter de "nom"
string Personnage::getName()
{
	return nom;
}

// Getter de "pv"
int Personnage::getHP()
{
	return pv;
}

// Getter de "force"
int Personnage::getStrength()
{
	return force;
}

// Getter de "taux_crit"
float Personnage::getCrit_Rate()
{
	return taux_crit;
}

Weapon Personnage::getWeapon()
{
	return arme;
}

// Setter de "nom"
void Personnage::setName()
{
	cout << "Entrez le Nom de votre Personnage : ";
	cin >> nom;
	cout << "\n";
}

void Personnage::setWeapon()
{
	cout << "Choisissez votre arme\n";
	cout << "Vous avez le choix entre : \n\n";
	cout << "- Epee\n";
	cout << "- Baton Magique\n";
	cout << "- Bouclier\n";
	cin >> arme;
}

// Methode affichant "Personnage"
void Personnage::ShowCharacter()
{
	cout << "-------";
	
	for (int i = 0; i < sizeof(getName()); i++)
	{
		cout << "-";
	}
	
	cout << "\n";
	cout << "       " << getName()  << "\n";
	cout << "-------";

	for (int i = 0; i < sizeof(getName()); i++)
	{
		cout << "-";
	}

	cout << "\n\n";
	cout << "_____| " << "Stats" << " |_____\n\n";
	cout << "Health : " << getHP() << " HP" << "\n";
	cout << "Strength : " << getStrength() << " %" << "\n";
	cout << "Critical Rate : " << getCrit_Rate() << " %" << "\n";
}