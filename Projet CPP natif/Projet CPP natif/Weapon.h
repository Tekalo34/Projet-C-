#pragma once
#include <iostream>
#include <string>

using namespace std;

class Weapon
{
public:
	// Constructor
	Weapon(string Name, int Strength);

	// Getters
	string getName();
	int getStrength();

private:
	// Attributs
	string nom;
	int force;
};