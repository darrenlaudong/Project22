/* 
 * File: Gladiator.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

// Specification file for the Gladiator class
#ifndef GLADIATOR_H
#define GLADIATOR_H
#include <string>
using namespace std;

class Gladiator {
protected:
	short health; //Original Gladiator's Health
    short fatigue; //Original Gladiator's Fatigue
	short strength; //Original Gladiator's Strength
	short agility; //Original Gladiator's Agility
    short defense; //Original Gladiator's Defense
	short moveSpd; //Original Gladiator's Move speed

public:
    //Default Constructor
    Gladiator() {
        health = 0;
        fatigue = 0;
        strength = 0;
		agility = 0;
        defense = 0;
		moveSpd = 0;
    }
    //Base Constructor
    Gladiator(short hlt, short fat, short str, short agi, short def, short mvSp) {
        set(hlt, fat, str, agi, def, mvSp);
    }
	//Input values
    void set(short hlt, short fat, short str, short agi, short def, short mvSp) {
        health = hlt;
        fatigue = fat;
        strength = str;
	agility = agi;
        defense = def;
	moveSpd = mvSp;
    }
	//Accessors
    short getHealth() const {
        return health;
    }   
    short getFatigue() const {
        return fatigue;
    }
	short getStrength() const {
        return strength;
    }
	short getAgility() const {
        return agility;
    }
    short getDefense() const {
        return defense;
    }
	 short getMoveSpd() const {
        return moveSpd;
    }
	//Output
	void prntBase() const {
		 cout << "Base Stats: " << endl;
		cout << "Health\t" << "Fatigue\t" << "Strength\t" << "Agility\t" << "Defense\t" << "Movement\t" << endl
		<< health << "\t" << fatigue << "\t" << strength << "\t" << agility << "\t" << defense << "\t" << moveSpd << endl;
	}
};
#endif 