#pragma once
#include "Weapon.h"

class Magic_Wand : public Weapon
{
public:
	// Constructor
	Magic_Wand(int Damage, int Def);

	// Getters
	int getDamage();
	int getDef();

private:
	// Attributs
	int degats;
	int defense;
};

