/* 
 * File: Combat.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

#ifndef COMBAT_H
#define	COMBAT_H

#include <iostream>

using namespace std;

template <class T>
T attack(T attacker, T defender)
{
    float atkPerc;
    
    atkPerc = attacker-defender;
    
    if (atkPerc < 0)
    {
        atkPerc = 0;
    }
    else if (atkPerc > 0 && atkPerc < 3)
    {
        atkPerc = 1;
    }
    else if (atkPerc >= 3 && atkPerc < 6)
    {
      atkPerc = 2;  
    }
    else if (atkPerc > 6)
    {
        atkPerc = 3;
    }
    return atkPerc;
}

template <class T>
T getDamage(T attacker, T defender, T attkPerc)
{
    int damage;
    
    damage = ((attacker*attkPerc)/(defender/3));
    
    return damage;
}

template <class T>
T getBlock(T attacker, T defender)
{
    float blocked;

    blocked = attacker - defender;
  
    return blocked;
}

template <class T>
T getDodge(T attacker, T defender)
{
    float dodge;
    
    dodge = attacker - defender;
    
    return dodge;
}

template <class T>
T getCirt(T attacker, T defender)
{
    float cirt;
    
    //math
    
    return cirt;
}

#endif	/* COMBAT_H */