#pragma once
#include "Sword.h"
#include "Shield.h"
#include "Magic_Wand.h"
#include "Personnage.h"

using namespace std;

class Weapon
{
public:
	// Constructor
	Weapon();

	// Methodes
	virtual void showStats();
	
	// Getters
	string getWeaponName();
	string getWeaponType();

	// Setter
	void setWeaponName();

private:
	// Attributs
	string nomArme;
	string typeArme;
};