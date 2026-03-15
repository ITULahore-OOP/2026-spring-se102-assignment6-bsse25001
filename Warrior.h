#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"

#include <iostream>
#include <string>
using namespace std;

class Warrior: public Hero {
    protected:
    int armorRating;
    public:
    Warrior(string name, int health, int basep, int armRating);
    ~Warrior();
    int getArmor();
    int calculateEffectiveHealth ();
};


#endif