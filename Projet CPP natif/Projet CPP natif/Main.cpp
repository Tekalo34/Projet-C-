#include <iostream>
#include <string>
#include <dos.h>
#include "Personnage.h"

using namespace std;

string continuer;

void MainMenuAffichage() {
	
	cout << "\n\n\n\n\n\n\n";
	cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n";
	cout << "						       Game Title\n\n";
	cout << "-----------------------------------------------------------" << "--" << "-----------------------------------------------------------\n\n\n";
	cout << "					   (Appuyer sur 'Entrer' pour Jouer) ";
	cin >> continuer;
	
	while (continuer != "1")
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
		cin >> continuer;
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

	cout << "Vous arrivez dans le hall de la guilde avec votre équipier(ère). Le chef de guilde vous tends deux missions de niveau bronze que vous savez être le niveau d'aventurier le plus bas." << endl;
	cout << "1- ''DES RATS !''" << endl;
	cout << "Lieu : Auberge de Frank" << endl;
	cout << "Bonjour aventurier(ère)s, je me nomme Frank, aubergiste depuis plus de 30ans." << endl;
	cout << "Hélas mon commerce se trouve en danger : des rats on élu domicile dans ma cuisine !" << endl;
	cout << "Aidez moi et je vous régalerez avec mon délicieux bouillon de poule et vous payerais de quelques pièces de cuivre." << endl;
	cout << "2- ''DES MITES...''" << endl;
	cout << "Lieu : Atelier de couture de Charlotte" << endl;
	cout << "Chèr(e)s aventurier(ère)s, je suis Charlotte, couturière de mère en fille depuis 5 générations." << endl;
	cout << "Depuis deux jours mes tissus semblent rongés par les mites; Malheureusement j'en ai la phobie et suis dans l'incapacité de m'en débarasser." << endl;
	cout << "Aidez moi je vous prie. Vous serez payer généreusement de quelques pièces d'argent; suivant le nombre de nuisibles tués." << endl;
	cout << "/A vous de choisir joueur 1/"
	cin >> choix;
	cout << endl;

	switch(choix)
	{
		case 1
		cout << "CHEF DE GUILDE : Exellent choix ! Ramenez moi un peu de bouillon si vous réussissez." << endl;
		cout << "Dit-il le sourir en coin."
		break;

		case 2
		cout << "CHEF DE GUILDE : Haha les mites ! Très bon choix ! Saluez mademoiselle Charlotte pour moi." << endl;
		cout << "Dit-il d'un ton amical."
		break;

		default
		cout << "Choisissez 1 ou 2." << endl;
		break;
	}
	
	return 0;
}