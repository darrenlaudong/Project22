/* 
 * File: WeaponStruct.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

#ifndef WEAPON_H
#define	WEAPON_H

#include <string>
using namespace std;

struct Weapon {
    
    char WpType[25];
    short wpDmg;
    short wpSpd;
    short wpRch;
    short DefUp;
    short AgiDwn;
};

struct Armor
{
    char ArType[15];
    short DefUp;
    short AgiDwn;
};

#endif	/* WEAPON_H */