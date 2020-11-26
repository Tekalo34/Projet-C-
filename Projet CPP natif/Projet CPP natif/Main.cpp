#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

string continuer = "1";

void MainMenuAffichage() {
	
	cout << "\n\n\n\n\n\n\n";
	cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n";
	cout << "						       Game Title\n\n";
	cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n\n";
	cout << "					   (Appuyer sur 'Entrer' pour Jouer) ";
	getline(cin, continuer);
	
	while (continuer != "")
	{
		system("cls");

		cout << "                      |\n";
		cout << "  J'ai dit 'Entrer' ! |\n";
		cout << "______________________|";

		cout << "\n\n\n\n\n";
		cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n";
		cout << "						       Game Title\n\n";
		cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n\n";
		cout << "					   (Appuyer sur 'Entrer' pour Jouer) ";
		getline(cin, continuer);
	}

	system("cls");
}



int main() {
	int choix = 0;

	Personnage Premier_Personnage(/*Health*/ 100, /*Strength*/ 50, /*Critical Rate*/ 30.5f);
	Personnage Second_Personnage(/*Health*/ 100, /*Strength*/ 50, /*Critical Rate*/ 30.5f);

	Sword Epee(/*Damage*/ 70, /*Defense*/ 40, /*Range*/ 30);
	Shield Bouclier(/*Damage*/ 40, /*Defense*/ 60, /*Range*/ 10);
	Magic_Wand Baton_Magique(/*Damage*/ 60, /*Defense*/ 20, /*Range*/ 50);

	MainMenuAffichage();

	Premier_Personnage.setP1Name();
	Premier_Personnage.ShowCharacter();
	Premier_Personnage.setWeapon();

	Second_Personnage.setP2Name();
	Second_Personnage.ShowCharacter();
	Second_Personnage.setWeapon();

	cout << "Vous arrivez dans le hall de la guilde avec votre equipier(ere). Le chef de guilde vous tends deux missions de niveau bronze que vous savez etre le niveau d'aventurier le plus bas." << endl;
	cout << "1- ''DES RATS !''" << endl;
	cout << "Lieu : Auberge de Frank" << endl;
	cout << "Bonjour aventurier(ere)s, je me nomme Frank, aubergiste depuis plus de 30ans." << endl;
	cout << "Helas mon commerce se trouve en danger : des rats on elu domicile dans ma cuisine !" << endl;
	cout << "Aidez moi et je vous régalerez avec mon delicieux bouillon de poule et vous payerais de quelques pieces de cuivre." << endl;
	cout << "2- ''DES MITES...''" << endl;
	cout << "Lieu : Atelier de couture de Charlotte" << endl;
	cout << "Cher(e)s aventurier(ere)s, je suis Charlotte, couturiere de mere en fille depuis 5 generations." << endl;
	cout << "Depuis deux jours mes tissus semblent ronges par les mites; Malheureusement j'en ai la phobie et suis dans l'incapacite de m'en debarasser." << endl;
	cout << "Aidez moi je vous prie. Vous serez payer genereusement de quelques pieces d'argent; suivant le nombre de nuisibles tues." << endl;
	cout << "/A vous de choisir joueur 1/";
	cin >> choix;
	cout << endl;

	switch(choix)
	{
	case 1 :
		cout << "CHEF DE GUILDE : Exellent choix ! Ramenez moi un peu de bouillon si vous reussissez." << endl;
		cout << "Dit-il le sourir en coin.";
		break;

	case 2:
		cout << "CHEF DE GUILDE : Haha les mites ! Tres bon choix ! Saluez mademoiselle Charlotte pour moi." << endl;
		cout << "Dit-il d'un ton amical.";
		break;

	default:
		cout << "Choisissez 1 ou 2." << endl;
		break;
	}
	
	return 0;
}