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
	
	return 0;
}