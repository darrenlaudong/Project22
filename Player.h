/* 
 * File: Player.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

// Specification file for the Player class
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Gladiator.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

class Player : public Gladiator
{
private:
	Weapon plyrWpn;
	Armor plyrArmr;
	string plyrName;
	string plyrStyl;
	short plyrAtkP;
	short plyrDdge;
	short plyrPrry;
	//short plyrFavor;

public:
	// Default Constructor
	Player() : Gladiator()
	{
		plyrName = "";
		plyrStyl = "";
		plyrAtkP = 0;
		plyrDdge = 0;
		plyrPrry = 0;
	}

	Player(string name, string style, string weapon, short dmg, short speed, short reach, short wDfAdj, short wAgiAdj, string armor, short aDefAdj, short aAgiAdj)
	{
		plyrName = name;
		plyrStyl = style;
		plyrWpn.set(weapon, dmg, speed, reach, wDfAdj, wAgiAdj);
		plyrArmr.set(armor, aDefAdj, aAgiAdj);
	}

	// Mutator functions
	void setAttributes(short hlt, short str, short fat, short agi, short def, short mvSpd);

	void setPlyrAtkP(short plyrStr, short wpDmg, short wpSpd);

	string getPlryName() const
	{ return plyrName; }

	string getPlryStyl() const
	{ return plyrStyl; }

	short getPlryAtkP() const
	{ return plyrAtkP; }

	short getPlryDdge() const
	{ return plyrDdge; }

	short getPlryPrry() const
	{ return plyrPrry; }

	void prntPlyrStrgs() const {
		cout << "Gladiator Name: " << plyrName << endl << endl;
		prntBase();
		cout << endl;
		cout << "Fighting Style: " << plyrStyl << endl << endl;
		plyrWpn.prntWep();
		cout << endl;
		plyrArmr.prntArmr();
		cout << endl;
	}

	void prntPlyrStats() const {
		cout << "Combat Stats: " << endl;
		cout << "\tAttack Power: " << plyrAtkP << endl;
		//cout << "Dodge Skill: " << plyrDdge << endl;
		//cout << "Parry Skill: " << plyrPrry << endl;
	}
};
#endif