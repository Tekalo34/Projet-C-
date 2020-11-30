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

int Personnage::getWeaponType()
{
	return arme;
}

// Setter de "nom" (Pour le Joueur 1)
void Personnage::setP1Name()
{
	cout << "Entrez le nom de votre 1er Personnage : ";
	cin >> nom;
	system("cls");
}

// Setter de "nom" (Pour le Joueur 2)
void Personnage::setP2Name()
{
	cout << "Entrez le nom de votre 2nd Personnage : ";
	cin >> nom;
	system("cls");
}

// Methode pour le choix de l'arme
void Personnage::setWeapon(Weapon*W)
{
	cout << "\n\n\n\n";
	cout << "Maintenant " << getName() <<" il vous faut une arme !\n\n";
	cout << "Vous avez le choix entre : \n\n";

	cout << "1 - Epee (" /* << W->showStats()*/ << ") ;\n";
	cout << "2 - Baton Magique (" /* << W->showStats()*/ << ") ;\n";
	cout << "3 - Bouclier (" /* << W->showStats()*/ << ") ;\n\n";
	
	cout << "(Attention vous n'avez le droit qu'a une seule arme !)\n\n";
	cout << "Alors quel sera votre arme ? (Choisissez 1, 2 ou 3) : ";
	cin >> arme;
	
	while (arme != 1 || arme != 2 || arme != 3)
	{
		switch (arme)
		{
			case 1 :
				cout << "*Epee ajoutee au sac*\n";
			break;

			case 2 :
				cout << "*Baton Magique ajoute au sac*\n";
			break;

			case 3 :
				cout << "*Bouclier ajoute au sac*\n";
			break;

			default :
				system("cls");

				cout << "                                                  |\n";
				cout << " Ce choix n'extiste pas . . . Veuillez réitérer ! |\n";
				cout << "__________________________________________________|\n\n";


				cout << "Vous avez le choix entre : \n\n";

				cout << "1 - Epee " /* << W->showStats()*/ << " ;\n";
				cout << "2 - Baton Magique " /* << W->showStats()*/<< " ;\n";
				cout << "3 - Bouclier " /* << W->showStats()*/ << " ;\n\n";

				cout << "(Attention vous n'avez le droit qu'a une seule arme !)\n\n";
				cout << "Alors quel sera votre arme ? (Choisissez 1, 2 ou 3) : ";
				cin >> arme;
			break;
		}
	}

	system("cls");
}

// Methode affichant "Personnage"
void Personnage::ShowCharacter()
{
	string continuer = "1";
	// cout << sizeof(getName()); // Debug

	cout << "\n\n\n\n\n\n\n";
	
	cout << "	    ~~~~| Resume de votre Personnage |~~~~\n\n";
	cout << "	-------";
	
	for (int i = 0; i < sizeof(getName()); i++)
	{
		cout << "-";
	}
	
	cout << "\n";
	cout << "			" << getName()  << "\n";
	cout << "	-------";

	for (int i = 0; i < sizeof(getName()); i++)
	{
		cout << "-";
	}

	cout << "\n\n";
	cout << "		    _____| " << "Stats" << " |_____\n\n";
	cout <<	"		    Vie : " << getHP() << " HP" << "\n";
	cout << "		    Force : " << getStrength() << " %" << "\n";
	cout << "		    Taux de Critique : " << getCrit_Rate() << " %" << "\n\n\n\n\n\n\n\n\n\n\n";

	cout << "(Appuyez sur 'Entrer' pour continuer) ";
	getline(cin, continuer);

	while (continuer != "")
	{	
		system("cls");
		
		cout << "                      |\n";
		cout << "  On a dit 'Entrer' ! |\n";
		cout << "______________________|\n\n\n\n\n";
		
		cout << "	    ~~~~| Resume de votre Personnage |~~~~ \n\n";

		cout << "	-------";

		for (int i = 0; i < sizeof(getName()); i++)
		{
			cout << "-";
		}

		cout << "\n";
		cout << "			" << getName() << "\n";
		cout << "	-------";

		for (int i = 0; i < sizeof(getName()); i++)
		{
			cout << "-";
		}

		cout << "\n\n";
		cout << "		    _____| " << "Stats" << " |_____\n\n";
		cout << "		    Vie : " << getHP() << " HP" << "\n";
		cout << "		    Force : " << getStrength() << " %" << "\n";
		cout << "		    Taux de Critique : " << getCrit_Rate() << " %" << "\n\n\n\n\n\n\n\n\n\n\n";

		cout << "(Appuyez sur 'Entrer' pour continuer) ";
		getline(cin, continuer);
	}

	system("cls");
}