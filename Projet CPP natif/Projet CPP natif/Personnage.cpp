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

Weapon Personnage::getWeaponType()
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

// Methode pour le choix de l'arme
void Personnage::setWeapon()
{
	cout << "Maintenant " << getName() <<" il vous faut une arme !\n";
	cout << "Vous avez le choix entre : \n\n";
	cout << "- Epee\n";
	cout << "- Baton Magique\n";
	cout << "- Bouclier\n\n";
	cout << "(Attention vous n'avez le droit qu'a une seule arme !)\n\n";
	cout << "Alors quel sera votre arme ? : ";
	cin >> arme;
	
	switch (arme)
	{
		case "Epee" :
			cout << "*Epee ajoutee au sac*\n";
		break;

		case "Baton Magique" :
			cout << "*Baton Magique ajoute au sac*\n";
		break;

		case "Bouclier" :
			cout << "*Bouclier ajoute au sac*\n";
		break;

		default :
			cout << "Cette arme n'extiste pas . . . Desole ! \n";
			setWeapon();
		break;
	}
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