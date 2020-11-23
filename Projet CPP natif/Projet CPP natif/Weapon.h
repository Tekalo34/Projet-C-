#pragma once
#include <iostream>
#include <string>
#include "Sword.h"
#include "Shield.h"
#include "Magic_Wand.h"

using namespace std;

class Weapon
{
public:
	// Constructor
	Weapon();

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