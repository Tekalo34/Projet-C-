#pragma once
#include "Weapon.h"

class Magic_Wand //: public Weapon
{
public:
	// Constructor
	Magic_Wand(int Damage, int Def, int Range);

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

