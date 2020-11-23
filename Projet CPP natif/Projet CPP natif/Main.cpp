#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int choix;

int main() {

	Personnage P1(/*Health*/ 100, /*Strength*/ 50, /*Critical Rate*/ 30.5f);
	Personnage P2(/*Health*/ 100, /*Strength*/ 50, /*Critical Rate*/ 30.5f);

	P1.setName();

	P1.ShowCharacter();



	/*cout << "Quel est votre choix : ";
	cin >> choix;

	switch (choix)
	{
	case 1:
		cout << "Vous avez fais le choix 1\n";
		break;

	case 2:
		cout << "vous avez fais le chois 2\n";
		break;

	default:
		cout << "Entree invalide !\n";
		break;
	}*/
	
	return 0;
}