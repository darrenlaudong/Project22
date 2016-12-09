/* 
 * File: Armor.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

// Specification file for the Armor class
#ifndef ARMOR_H
#define ARMOR_H
#include <string>

using namespace std;

class Armor
{
private:
	string arName;
	short arDefAdj;
	short arAgiAdj;

public:
	//Default Constructor
	Armor() {
		set("",0,0);
	}

	//Base Constructor
	Armor(string armor, 
        short aDefAdj, 
        short aAgiAdj) { 
		set(armor, aDefAdj, aAgiAdj);
	}

	//Mutators
	void set(string armor, short aDefAdj, short aAgiAdj) {
		arName = armor;
		arDefAdj = aDefAdj;
		arAgiAdj = aAgiAdj;
	}

	string getArName() const
	{ return arName; }

	short getArDefAdj() const
	{ return arDefAdj; }

	short getArAgiAdj() const
	{ return arAgiAdj; }

	void prntArmr() const {
		cout << "Armor\t" << "Def Adj\t" << "Agi Adj\t" << endl
		<< arName << "\t" << arDefAdj << "\t" << arAgiAdj << endl;
	}

};
#endif