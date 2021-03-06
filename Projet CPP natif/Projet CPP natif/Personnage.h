#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"

using namespace std;

class Personnage
{
public :
	// Conctructor
	Personnage(int HP, int Strength, float Crit_Rate);

	// M�thodes
	void ShowCharacter();

	// Getters	
	string getName();
	int getHP();
	int getStrength();
	float getCrit_Rate();
	int getWeaponType();

	// Setters
	void setP1Name();
	void setP2Name();
	void setWeapon(Weapon*W);

private :
	// Attributs
	string nom;
	int pv;
	int force;
	float taux_crit;
	int arme;
};

