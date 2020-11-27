#pragma once
#include "Weapon.h"

class Shield //: public Weapon
{
public:
	// Constructor
	Shield(int Damage, int Def, int Range);

	// Methodes
	void showStats();
	
	// Getters
	int getDamage();
	int getDef();
	int getRange();

private:
	// Attributs
	int degats;
	int defense;
	int portee;
};

