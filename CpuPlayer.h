/* 
 * File: CpuPlayer.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

#ifndef CPUPLAYER_H
#define	CPUPLAYER_H

#include "Gladiator.h"

class CpuPlayer : public Gladiator
{
private:
   string name;

public:
    //Default Constructor1
    CpuPlayer() {
        name = "";
    }

    //Constructor1
    CpuPlayer(string nm) {
        name = nm;
     }

    //Mutators
    void setName(string nm) {
        name = nm;
    }
    //Accessors
    string getName() const {
        return name;
    }
};

#endif	/* CPUPLAYER_H */