/* 
 * File:   gladius.cpp
 * Author: Shisheng Liu
 * Created on 12/01/2016, 16:46 PM
 * Purpose: Project2---The Gladiator
 */

//Functional includes
#include <iostream>
#include <cmath>
#include <cstdlib>

//Class includes
#include "Player.h"
#include "PlayerStats.h"

using namespace std;

//Global constants

//Function prototypes
Player mkStats();

//Start game
int main() {

	//Class definitions
	Gladiator player (100,20,10,10,10,10);
	Gladiator opp1 (100,20,10,10,10,10);
	Player stats;
	//Enter user choices
	stats = mkStats();
	//Show user choices
	stats.prntPlyrStrgs();

	//Runing until Victory or Death

	//Exit game
	return 0;
}

Player mkStats() {

	Player stats;

	//Getter
	short getPlyrWep;
	short getPlyrArmr;
	short getPlyrStnc;

	//Presets
	short plyrHlth; //Health adjustment
	short plyrStr; //Strength adjustment
	short plyrFati; //Fatigue adjustment
	short plyrAgi; //Agility adjustment
	short plyrDef; //Defense adjustment
	short plyrMvSp; //Move Speed adjustment
        
	//Variables
	string name; //Get player name
	string style;
	string weapon; //Get player Weapon
	string armor; //Get player Armor
	short wpDmg; //Weapon Damage
	short wpSpd; //Weapon Speed
	short wpRch; //Weapon Reach 
	short wpDef; //Defense Adjustment from Weapon
	short wpAgi; //Agility Adjustment from Weapon
	short arDef; //Defense Adjustment from Armor
	short arAgi; //Agility Adjustment from Armor
        
	//Calculatables
	short attkPwr; //Calculated attack power
	short dodge; //Calculated dodge
	short parry; //Calculated cirt
	short plyrRch; //Calculated total reach

	//Get player's name
	cout << "Tell me what is your name, The Gladiator! ";
	getline(cin, name);
	//Input a name
	//stats.plyrName = name;
	//Input weapon
	cout << "Pick a weapon up which you enjoy fighting with? " << endl;
	cout << "1: Comman One-Handed Short Sword" << endl
		<< "2: Comman One-Handed Mace" << endl
		<< "3: Comman One-Handed Hammer" << endl
		<< "4: Comman One-Handed Flail" << endl
		<< "5: Comman Two-Handed Long Sword" << endl
		<< "6: Comman Two-Handed Hammer" << endl
		<< "7: Comman Two Handed Trident" << endl
		<< "8: Comman Two Short Swords";
	cin >> getPlyrWep;
	//type, damage, speed, reach, defence adj, agility adj
	if (getPlyrWep = 1) {
		weapon = "Comman Short Sword";
		wpDmg = 5;
		wpSpd = 4;		
		wpRch = 1;
		wpDef = 1;
		wpAgi = 1;
	} else if (getPlyrWep = 2) {
		weapon = "Comman One-Handed Mace";
		wpDmg = 7;
		wpSpd = 3;		
		wpRch = 0;
		wpDef = 2;
		wpAgi = 0;
	} else if (getPlyrWep = 3) {
		weapon = "Comman One-Handed Hammer";
		wpDmg = 6;
		wpSpd = 3;		
		wpRch = 1;
		wpDef = 1;
		wpAgi = 0;
	} else if (getPlyrWep = 4) {
		weapon = "Comman One-Handed Flail";
		wpDmg = 7;
		wpSpd = 1;		
		wpRch = 3;
		wpDef = 0;
		wpAgi = 1;
	} else if (getPlyrWep = 5) {
		weapon = "Comman Two-Handed Long Sword";
		wpDmg = 8;
		wpSpd = 2;		
		wpRch = 3;
		wpDef = 2;
		wpAgi = 3;
	} else if (getPlyrWep = 6) {
		weapon = "Comman Two-Handed Hammer";
		wpDmg = 12;
		wpSpd = 2;
		wpRch = 3;
		wpDef = 2;
		wpAgi = 0;
	} else if (getPlyrWep = 7) {
		weapon = "Comman Two Handed Trident";
		wpDmg = 10;
		wpSpd = 2;
		wpRch = 4;
		wpDef = 5;
		wpAgi = 1;
	} else if (getPlyrWep = 8) {
		weapon = "Comman Two Short Swords";
		wpDmg = 5;
		wpSpd = 6;
		wpRch = 1;
		wpDef = 0;
		wpAgi = 1;
	}
	//player armor	
	cout << "What armor do you wear? " << endl;
	cout << "1: Half Leather" << endl
		<< "2: Full Leather" << endl
		<< "3: Bronzer Armor" << endl
		<< "4: Sliver Armor" << endl
		<< "5: Golden Armor << endl
		<< "6: Legency Armor" << endl;
	cin >> getPlyrArmr;
	//type, defense adj, agility adj
	if (getPlyrArmr = 1) {
		armor = "Half Leather";
		arDef = 3;
		arAgi = 2;
	} else if (getPlyrArmr = 2) {
		armor = "Full Leather";
		arDef = 4;
		arAgi = 3;
	} else if (getPlyrArmr = 3) {
		armor = "Bornzer Armor";
		arDef = 4;
		arAgi = 2;
	} else if (getPlyrArmr = 4) {
		armor = "Sliver Armor";
		arDef = 5;
		arAgi = 4;
	} else if (getPlyrArmr = 5) {
		armor = "Golden Armor";
		arDef = 5;
		arAgi = 3;
	} else if (getPlyrArmr = 6) {
		armor = "Legency Armor";
		arDef = 6;
		arAgi = 5;
	}
	//Fignting style menu
	cout << "What kind of fighting style you are?: " << endl;
	cout << endl << "1: I'm Assasin";
	cout << endl << "2: I'm Hercules";
	cout << endl << "3: I'm Knight";
	cout << endl << "4: I'm Barbarian";
	cout << endl << "Fighting Style: ";
	cin >> getPlyrStnc;
        
	//style, health, strength, fatigue, agility, defense, movement
	if (getPlyrStnc = 1) {
		style = "Assasin";
		plyrHlth = 0;
		plyrStr = 11;
		plyrAgi = 14;
		plyrDef = 11;
		plyrMvSp = 10;
	}
	else if (getPlyrStnc = 2) {
		style = "Hercules";
		plyrHlth = 1;
		plyrStr = 13;
		plyrAgi = 14;
		plyrDef = 13;
		plyrMvSp = 10;
	}
	else if (getPlyrStnc = 3) {
		style = "Knight";
		plyrHlth = 11;
		plyrStr = 17;
		plyrAgi = 14;
		plyrDef = 10;
		plyrMvSp = 11;
	}
	else if (getPlyrStnc = 4) {
		style = "Barbarian";
		plyrHlth = 20;
		plyrStr = 13;
		plyrAgi = 9;
		plyrDef = 14;
		plyrMvSp = 10;
	}
	//Filled classes
	stats.setAttributes(plyrHlth, plyrStr, plyrFati, plyrAgi, plyrDef, plyrMvSp);
	stats.setPlyrAtkP(plyrStr, wpDmg, wpSpd);
        
	//Return
	return stats;
}