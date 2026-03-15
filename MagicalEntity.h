#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
// #include "Hero.h"
#include <iostream>
#include <string>
using namespace std;

class MagicalEntity {
    protected:
    int manaPool;
    int spellPower;
    public:
    MagicalEntity (int mana = 0, int spellPwr = 0);
    ~MagicalEntity();
    int getMana () const ;
    int getSpellPower () const;
};

#endif