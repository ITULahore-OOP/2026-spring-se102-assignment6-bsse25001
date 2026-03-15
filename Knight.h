#ifndef KNIGHT_H
#define KNIGHT_H
#include "Warrior.h"
#include <iostream>
#include <string>
using namespace std;

class Knight: public Warrior {
    protected:
    int chargeBonus;
    public:
    Knight (string name, int health, int basePwr, int armRating, int charge);
    ~Knight ();
    int getChargeBonus ();
    int calculateBurstDamage ();
};

#endif