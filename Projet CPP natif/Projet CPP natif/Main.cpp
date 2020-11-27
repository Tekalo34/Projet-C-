#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

string continuer = "1";

void MainMenuAffichage() {
	
	cout << "\n\n\n\n\n\n\n\n";
	cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n";
	cout << "						       Game Title\n\n";
	cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n\n";
	cout << "					   (Appuyer sur 'Entrer' pour Jouer)\n\n";
	cout << "			   (Clicker sur la 'Croix Rouge' tout en haut a droite pour Quitter) ";
	getline(cin, continuer);
	
	while (continuer != "" && continuer != "Echap")
	{
		system("cls");

		cout << "                        |\n";
		cout << "    On a dit 'Entrer'   |\n";
		cout << "  ou 'La Croix Rouge' ! |\n";
		cout << "________________________|";

		cout << "\n\n\n\n\n";
		cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n";
		cout << "						       Game Title\n\n";
		cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n\n";
		cout << "					   (Appuyer sur 'Entrer' pour Jouer)\n\n";
		cout << "			   (Clicker sur la 'Croix Rouge' tout en haut a droite pour Quitter) ";
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
	//Premier_Personnage.setWeapon();

	Second_Personnage.setP2Name();
	Second_Personnage.ShowCharacter();
	//Second_Personnage.setWeapon();

	//Scene 1
	cout << "Vous arrivez dans le hall de la guilde avec votre equipier(ere). Le chef de guilde vous tends deux missions de niveau bronze que vous savez etre le niveau d'aventurier le plus bas." << endl;
	
	cout << "1- ''DES RATS !''" << endl;
	cout << "Lieu : Auberge de Frank" << endl;
	cout << "Bonjour aventurier(ere)s, je me nomme Frank, aubergiste depuis plus de 30ans." << endl;
	cout << "Helas mon commerce se trouve en danger : des rats on elu domicile dans ma cuisine !" << endl;
	cout << "Aidez moi et je vous regalerez avec mon delicieux bouillon de poule et vous payerais de quelques pieces de cuivre." << endl;
	
	cout << "2- ''DES MITES...''" << endl;
	cout << "Lieu : Atelier de couture de Charlotte" << endl;
	cout << "Cher(e)s aventurier(ere)s, je suis Charlotte, couturiere de mere en fille depuis 5 generations." << endl;
	cout << "Depuis deux jours mes tissus semblent ronges par les mites; Malheureusement j'en ai la phobie et suis dans l'incapacite de m'en debarasser." << endl;
	cout << "Aidez moi je vous prie. Vous serez payer genereusement de quelques pieces d'argent; suivant le nombre de nuisibles tues." << endl;
	
	cout << "/A vous de choisir " << Premier_Personnage.getName() << ", qui voulez vous aider ?/ (Choisissez 1 ou 2) : ";
	cin >> choix;
	cout << endl;

	switch (choix) //Choix 1
	{
	case 1:
		system("cls");
		cout << "CHEF DE GUILDE : Exellent choix ! Ramenez moi un peu de bouillon si vous reussissez." << endl;
		cout << "Dit-il le sourir en coin.";
		break;

	case 2:
		system("cls");
		cout << "CHEF DE GUILDE : Haha les mites ! Tres bon choix ! Saluez mademoiselle Charlotte pour moi." << endl;
		cout << "Dit-il d'un ton amical.";
		break;

	default:
		system("cls");
		cout << "/On a dit 1 ou 2 !/" << endl;
		cout << "Rappel : 1- ''DES RATS !'' (Auberge de Frank)" << endl;
		cout << "         2- ''DES MITES...'' (Atelier de couture de Charlotte)" << endl;
		cout << "/Choisissez 1 ou 2/" << endl;
		cin >> choix;
		cout << endl;
		break;
	}


	system("pause");
	return 0;
}