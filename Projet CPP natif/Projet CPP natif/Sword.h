#pragma once
#include "Weapon.h"

class Sword : public Weapon
{
public:
	// Constructor
	Sword(int Damage, int Def);

	// Getters
	int getDamage();
	int getDef();

private:
	// Attributs
	int degats;
	int defense;
};

