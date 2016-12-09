/* 
 * File: Weapon.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

// Specification file for the Weapon class
#ifndef WEAPON_H
#define WEAPON_H
#include <string>

using namespace std;

class Weapon
{
private:
	string wpName;
	short wpDamage;
	short wpSpeed;
	short wpReach;
	short wpDefAdj;
	short wpAgiAdj;

public:
	// Default Constructor1
	Weapon()
	{
		set("",0,0,0,0,0);   }

	// Constructor1
	Weapon(string weapon, short dmg, short speed, short reach, short wDefAdj, short wAgiAdj)
	{ 
		set(weapon, dmg, speed, reach, wDefAdj, wAgiAdj);
	}

	//Mutator
	void set(string weapon, short dmg, short speed, short reach, short wDefAdj, short wAgiAdj)
	{
		wpName = weapon;
		wpDamage = dmg;
		wpSpeed = speed;
		wpReach = reach;
		wpDefAdj = wDefAdj;
		wpAgiAdj = wAgiAdj;
	}

	string getWpName() const
	{ return wpName; }

	short getWpDamage() const
	{ return wpDamage; }

	short getWpSpeed() const
	{ return wpSpeed; }

	short getWpReach() const
	{ return wpReach; }

	short getWpDefAdj() const
	{ return wpDefAdj; }

	short getWpAgiAdj() const
	{ return wpAgiAdj; }

	void prntWep() const {
		cout << "Weapon\t" << "Damage\t" << "Speed\t" << "Reach\t" << "Def Adj.\t" << "Agi Adj\t" << endl
		<< wpName << "\t" << wpDamage << "\t" << wpSpeed << "\t" << wpReach << "\t" << wpDefAdj << "\t" << wpAgiAdj << endl;
	}

};
#endif