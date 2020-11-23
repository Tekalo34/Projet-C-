#pragma once
#include "Weapon.h"

class Shield : public Weapon
{
public:
	// Constructor
	Shield(int Damage, int Def);

	// Getters
	int getDamage();
	int getDef();

private:
	// Attributs
	int degats;
	int defense;
};

