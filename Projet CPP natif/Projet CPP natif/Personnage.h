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

	// Méthodes
	void ShowCharacter();

	// Getters	
	string getName();
	int getHP();
	int getStrength();
	float getCrit_Rate();
	Weapon getWeapon();

	// Setters
	void setName();
	void setWeapon();

private :
	// Attributs
	string nom;
	int pv;
	int force;
	float taux_crit;
	Weapon arme;
};

