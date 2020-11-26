#pragma once
#include "Weapon.h"

class Sword //: public Weapon
{
public:
	// Constructor
	Sword(int Damage, int Def, int Range);

	// Methodes
	void showStats();
	
	// Getters
	int getDamage();
	int getDef();
	int getRange();
	//string getWeaponName();

private:
	// Attributs
	int degats;
	int defense;
	int portee;
};

