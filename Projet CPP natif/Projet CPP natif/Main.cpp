#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main() {
	
	Personnage P1(/*Health*/ 100, /*Strength*/ 50, /*Critical Rate*/ 30.5f);
	Personnage P2(/*Health*/ 100, /*Strength*/ 50, /*Critical Rate*/ 30.5f);

	P1.setName();

	P1.ShowCharacter();

	return 0;
}