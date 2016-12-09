/* 
 * File: PlayerStats.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

#ifndef PLAYERSTATS_H
#define	PLAYERSTATS_H

#include <string>

using namespace std;

struct PlayerStats {

    string plyrName;
    string plyrWep;
	string plyrArmr;
	short plyrAtkP;
	short plyrDdge;
	short plyrPrry;
	short plyrHlth;
	short plyrMvSp;
	short plyrStr;
	short plyrAgi;
	short plyrDef;
	short plyrfati;
	short plyrRch;
	short wpDamage;
	short wpDefAdj;
	short wpAgiAdj;
	short wpSpeed;
	short wpReach;
	short arDefAdj;
	short arAgiAdj;
};


#endif